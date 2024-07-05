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
    char *output_file = "a.bin";
    char *input_file = NULL;
    for (int i = 1; i < argc; ++i)
    {
        if (!strcmp(argv[i], "-o"))
        {
            output_file = argv[++i];
        }
        else
        {
            input_file = argv[i];
        }
    }
    if (input_file == NULL)
    {
        fprintf(stderr,
                "error: No Input File\n");
        exit(-1);
    }
    if (output_file == NULL)
    {
        fprintf(stderr,
                "error: missing filename after '-o'\n");
        exit(-1);
    }
    
    // printf("success!\ninptut_file=%s\noutput_file=%s\n",
    //         input_file,
    //         output_file);
    return 0;
}