#include "debugger.h"
#include "ui_debugger.h"
#include <iostream>
#include <string>
#include <sstream>

Debugger::Debugger(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Debugger)
{
    ui->setupUi(this);

}
void Debugger::updateDebugger(uint16_t *Memory,const uint16_t &PC,const uint16_t &IR,const uint16_t &MDR,const uint16_t &MAR,const uint16_t *R,const uint16_t &NZP){
    QString S = QString::number(PC);
    ui->PCVAL->setText(S);
    ui->PCVAL->setTextColor(QColor(12, 255, 0));
    S = QString::number(IR);
    ui->IRVAL->setText(S);
    ui->IRVAL->setTextColor(QColor(12, 255, 0));
    S = QString::number(MDR);
    ui->MDRVAL->setText(S);
    ui->MDRVAL->setTextColor(QColor(12, 255, 0));
    S = QString::number(R[0]);
    ui->R0VAL->setText(S);
    ui->R0VAL->setTextColor(QColor(12, 255, 0));
    S = QString::number(R[1]);
    ui->R1VAL->setText(S);
    ui->R1VAL->setTextColor(QColor(12, 255, 0));
    S = QString::number(R[0]);
    ui->R0VAL->setText(S);
    ui->R0VAL->setTextColor(QColor(12, 255, 0));
    S = QString::number(R[2]);
    ui->R2VAL->setText(S);
    ui->R2VAL->setTextColor(QColor(12, 255, 0));
    S = QString::number(R[3]);
    ui->R3VAL->setText(S);
    ui->R3VAL->setTextColor(QColor(12, 255, 0));
    S = QString::number(R[4]);
    ui->R4VAL->setText(S);
    ui->R4VAL->setTextColor(QColor(12, 255, 0));
    S = QString::number(R[5]);
    ui->R5VAL->setText(S);
    ui->R5VAL->setTextColor(QColor(12, 255, 0));
    S = QString::number(R[6]);
    ui->R6VAL->setText(S);
    ui->R6VAL->setTextColor(QColor(12, 255, 0));
    S = QString::number(R[7]);
    ui->R7VAL->setText(S);
    ui->R7VAL->setTextColor(QColor(12, 255, 0));
    S = QString::number(NZP);
    ui->NZPVAL->setText(S);
    ui->NZPVAL->setTextColor(QColor(12, 255, 0));
    uint16_t *x = (Memory+PC-1);
    std::ostringstream oss;
    oss  << x;
    std::string address_a = oss.str();
    QString qstr = QString::fromStdString(address_a);
    //S = *x;
    ui->MEMADDR->setText(qstr);
    ui->MEMADDR->setTextColor(QColor(12, 255, 0));
}

int Debugger::getNegNumber(int n){
    int negnumber = (-1)*(32-n);
    return negnumber;
}
int Debugger::EXPANDimm5(uint16_t imm5){
    if(imm5 >= 16) //number is negative
    {
        int negnumber = getNegNumber(imm5);
        return negnumber;
    }
    else{
        int posnumber = imm5;
        return posnumber;
    }
}
int Debugger::getNeg(int base ,uint16_t x){ //x = 9 , base = 16 that is sum of all bits=1 plus 1
    int neg = x - base;
    return neg;
}
bool Debugger::isNeg(int base, uint16_t x){ // base is value in decimal if only leftmost bit is one
    if(x >= base)
        return true;
    else return false;
}
uint16_t Debugger::getPos(int base, int x){ //x = 9 , base = 16 that is sum of all bits=1 plus 1
    uint16_t pos = base + x;
    return pos;
}
int Debugger::RegPrint(uint16_t R){
    int result;
    if(isNeg(32768, R))
        result = getNeg(65536, R);
    else result = R;
    std::cout << result;
}







void Debugger::ADD(uint16_t IR ,uint16_t *R, uint16_t &NZP){
    uint16_t mask = 3584;
    uint16_t DR = (IR & mask) / 512;
    mask = 448;
    uint16_t SR1 = (IR & mask) / 64;
    mask = 32;
    uint16_t flag = (IR & mask) / 32;
    if(flag == 0){ // SR2 exists
        mask = 7;
        uint16_t SR2 = (IR & mask) / 1;
        int x ,y, z;
        if(isNeg(32768, R[SR1]))
            x = getNeg(65536 ,R[SR1]);
        else
            x = R[SR1];
        if(isNeg(32768, R[SR2]))
            y = getNeg(65536 ,R[SR2]);
        else
            y = R[SR2];
        z = x+y;
        R[DR] = z;
    }
    else { // No SR2. imm5
        mask = 31;
        uint16_t imm5 = IR & mask;
        int imm5_extended = EXPANDimm5(imm5);
        int x, z;
        if(isNeg(32768, R[SR1]))
            x = getNeg(65536 ,R[SR1]);
        else
            x = R[SR1];
        if(isNeg(32768, x+imm5_extended))
            z = getNeg(65536 ,x+imm5_extended);
        else
            z = x+imm5_extended;
        if(z < 0)
            z = getPos(65536,z);
        R[DR] = z;
    }
    if(R[DR] >= 32768) // determaine NZP
        NZP = 4;
    else if(R[DR] == 0)
        NZP = 2;
    else
        NZP = 1;

}
void Debugger::AND(uint16_t &IR ,uint16_t *R, uint16_t &NZP){
    uint16_t mask = 3584;
    uint16_t DR = (IR & mask) / 512;
    mask = 448;
    uint16_t SR1 = (IR & mask) / 64;
    mask = 32;
    uint16_t flag = (IR & mask) / 32;
    if(flag == 0){ // SR2 exists
        mask = 7;
        uint16_t SR2 = (IR & mask) / 1;
        R[DR] = R[SR1] & R[SR2];
    }
    else { // No SR2. imm5
        mask = 31;
        uint16_t imm5 = IR & mask;
        int imm5_extended = EXPANDimm5(imm5);
        R[DR] = R[SR1] & imm5_extended;
    }
    if(R[DR] >= 32768)
        NZP = 4;
    else if(R[DR] == 0)
        NZP = 2;
    else
        NZP = 1;
}
void Debugger::NOT(uint16_t &IR ,uint16_t *R, uint16_t &NZP){
    uint16_t mask = 3584;
    uint16_t DR = (IR & mask) / 512;
    mask = 448;
    uint16_t SR1 = (IR & mask) / 64;
    R[DR] = ~R[SR1];
    if(R[DR] >= 32768)
        NZP = 4;
    else if(R[DR] == 0)
        NZP = 2;
    else
        NZP = 1;
}
void Debugger::LD(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R, uint16_t &NZP){
    uint16_t mask = 3584;
    uint16_t DR = (IR & mask) / 512;
    mask = 511;
    uint16_t pcoffset = (IR & mask);
    int x;
    if(isNeg(256, pcoffset))
        x = getNeg(512, pcoffset);
    else
        x = pcoffset;
    x = PC + x;
    if( PC + x < 0)
        x = getPos(65536, PC + x);
    else
        x = PC + x;
    R[DR] = Memory[x];
    if(R[DR] >= 32768)
        NZP = 4;
    else if(R[DR] == 0)
        NZP = 2;
    else
        NZP = 1;
}
void Debugger::LDI(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R, uint16_t &NZP){
    uint16_t mask = 3584;
    uint16_t DR = (IR & mask) / 512;
    mask = 511;
    uint16_t pcoffset = (IR & mask);
    int x;
    if(isNeg(256, pcoffset))
        x = getNeg(512, pcoffset);
    else
        x = pcoffset;
    if( x + PC < 0)
        x = getPos(65536, x + PC);
    else
        x = x + PC;
    R[DR] = Memory[Memory[x]];
    if(R[DR] >= 32768)
        NZP = 4;
    else if(R[DR] == 0)
        NZP = 2;
    else
        NZP = 1;
}
void Debugger::LDR(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R, uint16_t &NZP){
    uint16_t mask = 3584;
    uint16_t DR = (IR & mask) / 512;
    mask = 63;
    uint16_t pcoffset = (IR & mask);
    mask = 448;
    uint16_t BaseR = (IR & mask) / 64;
    int x, y, z;
    if(isNeg(32768, R[BaseR]))
        x = getNeg(65536, R[BaseR]);
    else
        x = R[BaseR];
    if(isNeg(32, pcoffset))
        y = getNeg(64, pcoffset);
    else
        y = pcoffset;
    if( x + y < 0)
        z = getPos(65536, x + y);
    else
        z = x + y;
    R[DR] = Memory[z];
    if(R[DR] >= 32768)
        NZP = 4;
    else if(R[DR] == 0)
        NZP = 2;
    else
        NZP = 1;
}
void Debugger::LEA(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R){
    uint16_t mask = 3584;
    uint16_t DR = (IR & mask) / 512;
    mask = 511;
    uint16_t pcoffset = (IR & mask);
    int x;
    if(isNeg(256, pcoffset))
        x = getNeg(512, pcoffset);
    else
        x = pcoffset;
    x = PC + x;
    if( PC + x < 0)
        x = getPos(65536, PC + x);
    else
        x = PC + x;
    R[DR] = x;
}
void Debugger::ST(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R){
    uint16_t mask = 3584;
    uint16_t SR = (IR & mask) / 512;
    mask = 511;
    uint16_t pcoffset = (IR & mask);
    int x;
    if(isNeg(256, pcoffset))
        x = getNeg(512, pcoffset);
    else
        x = pcoffset;
    x = PC + x;
    if( PC + x < 0)
        x = getPos(65536, PC + x);
    else
        x = PC + x;
    Memory[x] = R[SR] ;
}
void Debugger::STI(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R){
    uint16_t mask = 3584;
    uint16_t SR = (IR & mask) / 512;
    mask = 511;
    uint16_t pcoffset = (IR & mask);
    int x;
    if(isNeg(256, pcoffset))
        x = getNeg(512, pcoffset);
    else
        x = pcoffset;
    x = PC + x;
    if( PC + x < 0)
        x = getPos(65536, PC + x);
    else
        x = PC + x;
    Memory[Memory[x]] = R[SR] ;
}
void Debugger::STR(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R){
    uint16_t mask = 3584;
    uint16_t SR = (IR & mask) / 512;
    mask = 63;
    uint16_t pcoffset = (IR & mask);
    mask = 448;
    uint16_t BaseR = (IR & mask) / 64;
    int x, y, z;
    if(isNeg(32768, R[BaseR]))
        x = getNeg(65536, R[BaseR]);
    else
        x = R[BaseR];
    if(isNeg(32, pcoffset))
        y = getNeg(64, pcoffset);
    else
        y = pcoffset;
    if( x + y < 0)
        z = getPos(65536, x + y);
    else
        z = x + y;
    Memory[z] = R[SR];
}
void Debugger::BR(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R, uint16_t &NZP){
    uint8_t n, z, p;
    uint16_t mask = 2048;
    n = (IR & mask) / 2048;
    mask = 1024;
    z = (IR & mask) /1024;
    mask = 512;
    p = (IR & mask) /512;
    mask = 511;
    uint16_t pcoffset = (IR & mask);
    int x, u;
    if(isNeg(256, pcoffset)){
        x = getNeg(512, pcoffset);
    }
    else x = pcoffset;
    if(x + PC < 0){
        u = getPos(65536 ,x+PC);
    }
    else u = x + PC;
    if( p == 1 && NZP == 1){
        PC = u;
    }
    else if( z == 1 && NZP == 2){
        PC = u;
    }
    else if( p == 1 && NZP == 4){
        PC = u;
    }
}
void Debugger::JMP(uint16_t &PC, uint16_t &IR , uint16_t *R){
    uint16_t mask = 448;
    uint16_t BaseR = (IR & mask) / 64;
    PC = R[BaseR];
}
void Debugger::JSR(uint16_t &IR ,uint16_t &PC, uint16_t *R){
    uint16_t temp = PC;
    uint16_t mask = 2048;
    uint16_t RorRR = (IR & mask) / 2048;
    if(RorRR == 1){
        mask = 2047;
        uint16_t pcoffset = (IR & mask);
        int x;
        if(isNeg(1024,pcoffset))
            x = getNeg(2048,pcoffset);
        else
            x = pcoffset;
        PC = PC + x;
    }
    else{
        mask = 448;
        uint16_t BaseR = (IR & mask) / 64;
        PC = R[BaseR];
    }
    R[7] = temp;
}







void Debugger::Fetch(uint16_t *Memory ,uint16_t &MAR ,uint16_t &IR ,uint16_t &PC){
    MAR = PC;
    IR = Memory[MAR];
    PC++;
}
void Debugger::Decode(uint16_t *Memory, uint16_t &PC, uint16_t &IR, uint16_t &MDR, uint16_t &MAR, uint16_t *R,uint16_t &NZP){
    uint16_t mask = 61440;
    uint16_t opcode = IR & mask;
    switch(opcode){
        case 0:   //BR
            BR(Memory, PC, IR, R, NZP);
            break;
        case 4096://ADD & ADD
            ADD(IR ,R, NZP);
            break;
        case 8192://LD
            LD(Memory, PC, IR, R, NZP);
            break;
        case 12288://ST
            ST(Memory, PC, IR, R);
            break;
        case 16384://JSR & JSRR
            JSR(IR ,PC, R);
            break;
        case 20480://AND & AND
            AND(IR ,R, NZP);
            break;
        case 24546://LDR
            LDR(Memory, PC, IR, R, NZP);
            break;
        case 28672://STR
            STR(Memory, PC, IR, R);
            break;
        case 32768://RTI

            break;
        case 36864://NOT
            NOT(IR ,R, NZP);
            break;
        case 40960://LDI
            LDI(Memory, PC, IR, R, NZP);
            break;
        case 45056://STI
            STI(Memory, PC, IR, R);
            break;
        case 49152://JMP & RET
            JMP(PC, IR , R);
            break;
        case 53248://reserved
            this->close();
            break;
        case 57344://LEA
            LEA(Memory, PC, IR, R);
            break;
        case 61440://TRAP

            break;

    }
    updateDebugger(Memory,PC,IR,MDR,MAR,R,NZP);
}


Debugger::~Debugger()
{
    delete ui;
}

void Debugger::on_pushButton_clicked()
{
    Fetch(Memory,MAR,IR,PC);
    Decode(Memory,PC,IR,MDR,MAR,R,NZP);

}

void Debugger::on_pushButton_2_clicked()
{
    this->close();
}
