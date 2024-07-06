#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <map>
#include <cstdint>

#define ADD_OPCODE 4096
#define AND_OPCODE 20480
#define BR_OPCODE 0
#define JMP_OPCODE 49152
#define JSR_OPCODE 16384
#define JSRR_OPCODE 16384
#define LD_OPCODE 8192
#define LDI_OPCODE 40960
#define LDR_OPCODE 24576
#define LEA_OPCODE 57344
#define NOT_OPCODE 36864
#define RET_OPCODE 49152
#define RTI_OPCODE 32768
#define ST_OPCODE 12288
#define STI_OPCODE 45056
#define STR_OPCODE 28672
#define TRAP_OPCODE 61440

int handleORGKW(std::vector<std::string> &l)
{
    if (l.size() != 2)
    {
        return -1;
    }
    if (l[0] != "ORG")
    {
        return 1;
    }
    if (l[1] != "0x3000" && l[1] != "x3000")
    {
        return 2;
    }
    return 0;
}
void getRidOfComments(char *const s)
{
    char *res = strchr(s, ';'); // find the location of the first ;
    if (res)
    {
        *res = '\0';
    }
}

uint16_t binToUI16(const char *bin)
{
    uint16_t res = 0;
    int j = 0;
    for (int i = strlen(bin) - 1; i >= 0; --i)
    {
        if (bin[i] == '1')
        {
            res = res | 1 << j;
        }
        else
        {
            res = res | 0 << j;
        }
        ++j;
    }
    return res;
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
    if (!tokens.size())
    {
        fprintf(stderr,
                "error: no token could be found\n");
        exit(-1);
    }

    int res = handleORGKW(tokens[0]);
    switch (res)
    {
    case -1:
        fprintf(stderr,
                "syntax error on first line\n");
        exit(-1);
        break;
    case 1:
        fprintf(stderr,
                "syntax error: need ORG keyword on first line\n");
        exit(-1);
        break;
    case 2:
        fprintf(stderr,
                "syntax error: need to start from 0x3000\n");
        exit(-1);
        break;
    }

    printf("ADD: %hu\n", binToUI16("0b0001000000000000"));
    printf("AND: %hu\n", binToUI16("0b0101000000000000"));
    printf("BR: %hu\n", binToUI16("0b0000000000000000"));
    printf("JMP: %hu\n", binToUI16("0b1100000000000000"));
    printf("JSR: %hu\n", binToUI16("0b0100000000000000"));
    printf("JSRR: %hu\n", binToUI16("0b0100000000000000"));
    printf("LD: %hu\n", binToUI16("0b0010000000000000"));
    printf("LDI: %hu\n", binToUI16("0b1010000000000000"));
    printf("LDR: %hu\n", binToUI16("0b0110000000000000"));
    printf("LEA: %hu\n", binToUI16("0b1110000000000000"));
    printf("NOT: %hu\n", binToUI16("0b1001000000000000"));
    printf("RET: %hu\n", binToUI16("0b1100000000000000"));
    printf("RTI: %hu\n", binToUI16("0b1000000000000000"));
    printf("ST: %hu\n", binToUI16("0b0011000000000000"));
    printf("STI: %hu\n", binToUI16("0b1011000000000000"));
    printf("STR: %hu\n", binToUI16("0b0111000000000000"));
    printf("TRAP: %hu\n", binToUI16("0b1111000000000000"));

    // std::map<std::string, u_int16_t> M;
    // M["ADD"] = 4096;   // 0b0001000000000000
    // M["AND"] = 20480;  // 0b0101000000000000
    // M["BR"] = 0;       // 0b0000000000000000
    // M["JMP"] = 49152;  // 0b1100000000000000
    // M["JSR"] = 16384;  // 0b0100000000000000
    // M["JSRR"] = 16384; // 0b0100000000000000
    // M["LD"] = 8192;    // 0b0010000000000000
    // M["LDI"] = 20480 M["LDR"] =
    //     M["LEA"] =
    //         M["NOT"] =
    //             M["RET"] =
    //                 M["RTI"] =
    //                     M["ST"] =
    //                         M["STI"] =
    //                             M["STR"] =
    //                                 M["TRAP"] =
    //                                     for (int i = 1; i < tokens.size(); ++i)
    // {
    // }

    return 0;
}