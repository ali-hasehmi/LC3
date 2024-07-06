#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void getRidOfComments(const char *s)
{
    char *res = strchr(s, ';'); // find the location of the first ;
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
    return 0;
}