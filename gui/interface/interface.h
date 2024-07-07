#ifndef INTERFACE_H
#define INTERFACE_H

#include <QMainWindow>
#include "debugger.h"

QT_BEGIN_NAMESPACE
namespace Ui { class interface; }
QT_END_NAMESPACE

class interface : public QMainWindow
{
    Q_OBJECT

public:
    uint16_t Memory[65536]; // 64k x 16 entire memory
    uint16_t PC = 24576; //3000 in hex
    uint16_t IR = 0;
    uint16_t MDR = 0;
    uint16_t MAR = 0;
    uint16_t R[8]; // general registers
    uint16_t NZP = 0;
    interface(QWidget *parent = nullptr);
    ~interface();



private slots:


    void on_textEdit_textChanged();


    void on_Debug_clicked();

    void on_Main_textChanged();

    void on_Main_2_textChanged();

    void on_Execute_clicked();

private:
    Ui::interface *ui;
};
#endif // INTERFACE_H
