//this program modifies a binary file
#include<stdio.h>

const unsigned long address = 0x1169; // offset from disassembled binary_to_modify

int main()
{
    
    FILE * fp = fopen("binary_to_modify", "r+b");
    unsigned char opcode = 0x74;
    fseek(fp, address, SEEK_SET);
    fwrite(&opcode, sizeof(opcode), 1, fp);
    fclose(fp);

    return 0;
}

//gcc -o modifier modifier.c