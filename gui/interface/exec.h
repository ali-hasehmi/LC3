#ifndef EXEC_H
#define EXEC_H

#include <QDialog>
#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

namespace Ui {
class Exec;
}

class Exec : public QDialog
{
    Q_OBJECT

public:
    explicit Exec(QWidget *parent = nullptr);
    ~Exec();

    uint16_t *Memory; // 64k x 16 entire memory
    uint16_t PC = 24576; //3000 in hex
    uint16_t IR = 0;
    uint16_t MDR = 0;
    uint16_t MAR = 0;
    uint16_t *R; // general registers
    uint16_t NZP = 0;


    void settings(uint16_t *Memory, uint16_t &PC, uint16_t &IR, uint16_t &MDR, uint16_t &MAR, uint16_t *R,uint16_t &NZP){
        this->Memory = Memory;
        this->PC = PC;
        this->IR = IR;
        this->MDR = MDR;
        this->MAR = MAR;
        this->R = R;
        this->NZP = NZP;
    }



    void updateDebugger(uint16_t *Memory,const uint16_t &PC,const uint16_t &IR,const uint16_t &MDR,const uint16_t &MAR,const uint16_t *R,const uint16_t &NZP);


    int getNegNumber(int n);
    int EXPANDimm5(uint16_t imm5);
    int getNeg(int base ,uint16_t x);
    bool isNeg(int base, uint16_t x);
    uint16_t getPos(int base, int x);
    int RegPrint(uint16_t R);


    void ADD(uint16_t IR ,uint16_t *R, uint16_t &NZP);
    void AND(uint16_t &IR ,uint16_t *R, uint16_t &NZP);
    void NOT(uint16_t &IR ,uint16_t *R, uint16_t &NZP);
    void LD(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R, uint16_t &NZP);
    void LDI(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R, uint16_t &NZP);
    void LDR(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R, uint16_t &NZP);
    void LEA(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R);
    void ST(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R);
    void STI(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R);
    void STR(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R);
    void BR(uint16_t *Memory, uint16_t &PC, uint16_t &IR ,uint16_t *R, uint16_t &NZP);
    void JMP(uint16_t &PC, uint16_t &IR , uint16_t *R);
    void JSR(uint16_t &IR ,uint16_t &PC, uint16_t *R);


    void Fetch(uint16_t *Memory ,uint16_t &MAR ,uint16_t &IR ,uint16_t &PC);
    void Decode(uint16_t *Memory, uint16_t &PC, uint16_t &IR, uint16_t &MDR, uint16_t &MAR, uint16_t *R,uint16_t &NZP);



private slots:
    void on_Exit_clicked();

private:
    Ui::Exec *ui;
};

#endif // EXEC_H
