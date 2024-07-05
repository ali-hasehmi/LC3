#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
                "error: missing filename after '-o'\n");
        exit(-1);
    }
    
        return 0;
}