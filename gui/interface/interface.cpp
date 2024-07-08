#include "interface.h"
#include "ui_interface.h"

#include "debugger.h"
#include "ui_debugger.h"

#include "exec.h"
#include "ui_exec.h"

#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
// core

interface::interface(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::interface)
{
    ui->setupUi(this);
    ui->Main->setTextColor(QColor(12, 255, 0));
    ui->Main_2->setTextColor(QColor(12, 255, 0));

}

interface::~interface()
{
    delete ui;
}



// gui
void interface::on_textEdit_textChanged()
{
    /*QString FileName = ui->textEdit->toPlainText();
    QStringList SubStrings = FileName.split("\n");
    QString x = SubStrings.join("-");
    ui->lineEdit->setText(x);*/
}




void interface::on_Debug_clicked()
{
    Debugger *Debugger1 = new Debugger();
    Debugger1->settings(Memory,PC,IR,MDR,MAR,R,NZP);
    Debugger1->show();

}

void interface::on_Main_textChanged()
{
    ui->Main->setTextColor(QColor(12, 255, 0));

}

void interface::on_Main_2_textChanged()
{
    ui->Main_2->setTextColor(QColor(12, 255, 0));
}

void interface::on_Execute_clicked()
{
    Exec *EX = new Exec();
    EX->settings(Memory,PC,IR,MDR,MAR,R,NZP);
    EX->show();
}
