#include <iostream>
#include <cstring>
#include <vector>
#include <string>

void getRidOfComments(char *const s)
{
    char *res = strchr(s, ';'); // find the location of the first ;
    if (res)
    {
        *res = '\0';
    }
}

void getRidOfNewLine(char *const s)
{
    char *res = strchr(s, '\n');
    if (res)
    {
        *res = '\0';
    }
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr,
                "error: No Input File\n");
        exit(-1);
    }
    char *output_file_path = "a.bin";
    char *input_file_path = NULL;
    for (int i = 1; i < argc; ++i)
    {
        if (!strcmp(argv[i], "-o"))
        {
            output_file_path = argv[++i];
        }
        else
        {
            input_file_path = argv[i];
        }
    }
    if (input_file_path == NULL)
    {
        fprintf(stderr,
                "error: No Input File\n");
        exit(-1);
    }
    if (output_file_path == NULL)
    {
        fprintf(stderr,
                "error: missing file name after '-o'\n");
        exit(-1);
    }
    FILE *input_file = fopen(input_file_path, "r");
    if (input_file == NULL)
    {
        fprintf(stderr,
                "error: coudn't open %s\n", input_file_path);
        return -1;
    }
    FILE *output_file = fopen(output_file_path, "w");
    if (output_file == NULL)
    {
        fprintf(stderr,
                "error: coudn't open %s\n", output_file_path);
        return -1;
    }

    char buff[1024];
    std::vector<std::vector<std::string>> tokens;

    while (fgets(buff, 1024, input_file))
    {
        bool flag = false;
        std::vector<std::string> line_tokens;
        getRidOfNewLine(buff);
        getRidOfComments(buff);
        char *tok = strtok(buff, " \t");
        if (tok)
        {
            flag = true;
        }
        // printf("%s\n",tok);
        while (tok != NULL)
        {
            std::string tmp(tok);
            line_tokens.push_back(tmp);
            tok = strtok(NULL, " \t");
        }
        if (flag)
        {
            tokens.push_back(line_tokens);
        }
    }
    for(auto it : tokens){
        for(auto jt : it){
            std::cout << jt << " ";
        }
        std::cout << "\n";
    }
    
    return 0;
}