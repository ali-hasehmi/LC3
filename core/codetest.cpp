#include <iostream>
#include <stdint.h>
#include <bits/stdc++.h>

void Fetch(uint16_t *Memory ,uint16_t &MAR ,uint16_t &IR ,uint16_t &PC){
    MAR = PC;
    IR = Memory[MAR], PC++;
}

void Decode(uint16_t *Memory, uint16_t &PC, uint16_t &IR, uint16_t &MDR, uint16_t &MAR, uint16_t *R){
    uint16_t mask = 61440;
    uint16_t opcode = IR & mask;
    switch(opcode){
        case 0:   //BR

            break;
        case 4096://ADD & ADD
            
            break;
        case 8192://LD

            break;
        case 12288://ST

            break;
        case 16384://JSR & JSRR

            break;
        case 20480://AND & AND

            break;
        case 24546://LDR

            break;
        case 28672://STR

            break;
        case 32768://RTI

            break;
        case 36864://NOT

            break;
        case 40960://LDI

            break;
        case 45056://STI

            break;
        case 49152://JMP & RET

            break;
        case 53248://reserved

            break;
        case 57344://LEA

            break;
        case 61440://TRAP

            break;

    }
}



int main(){
    uint16_t Memory[65536]; // 64k x 16 entire memory
    uint16_t PC = 24576; //3000 in hex
    uint16_t IR;
    uint16_t MDR;
    uint16_t MAR;
    uint16_t R[8]; // general registers
    Memory[24576] = 4096;
    Fetch(Memory,MAR,IR,PC);
    Decode(Memory,PC,IR,MDR,MAR,R);


}