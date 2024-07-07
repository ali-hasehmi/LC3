/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_interface
{
public:
    QWidget *centralwidget;
    QTextEdit *Main;
    QPushButton *Debug;
    QPushButton *Assemble;
    QPushButton *Execute;
    QTextEdit *Main_2;

    void setupUi(QMainWindow *interface)
    {
        if (interface->objectName().isEmpty())
            interface->setObjectName(QString::fromUtf8("interface"));
        interface->resize(1160, 777);
        interface->setStyleSheet(QString::fromUtf8("\n"
"background-color:rgb(83, 83, 83);"));
        centralwidget = new QWidget(interface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Main = new QTextEdit(centralwidget);
        Main->setObjectName(QString::fromUtf8("Main"));
        Main->setGeometry(QRect(13, 10, 1051, 511));
        QFont font;
        font.setFamily(QString::fromUtf8("Carbon Block"));
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        Main->setFont(font);
        Main->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 22pt \"Carbon Block\";"));
        Main->setTabStopWidth(80);
        Debug = new QPushButton(centralwidget);
        Debug->setObjectName(QString::fromUtf8("Debug"));
        Debug->setGeometry(QRect(1070, 90, 81, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("LED BOARD REVERSED"));
        Debug->setFont(font1);
        Debug->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));
        Assemble = new QPushButton(centralwidget);
        Assemble->setObjectName(QString::fromUtf8("Assemble"));
        Assemble->setGeometry(QRect(1070, 10, 81, 71));
        Assemble->setFont(font1);
        Assemble->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));
        Execute = new QPushButton(centralwidget);
        Execute->setObjectName(QString::fromUtf8("Execute"));
        Execute->setGeometry(QRect(1070, 170, 81, 71));
        Execute->setFont(font1);
        Execute->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 191, 191);"));
        Main_2 = new QTextEdit(centralwidget);
        Main_2->setObjectName(QString::fromUtf8("Main_2"));
        Main_2->setGeometry(QRect(10, 530, 1141, 231));
        Main_2->setFont(font);
        Main_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"font: 22pt \"Carbon Block\";"));
        Main_2->setReadOnly(true);
        Main_2->setTabStopWidth(80);
        interface->setCentralWidget(centralwidget);

        retranslateUi(interface);

        QMetaObject::connectSlotsByName(interface);
    } // setupUi

    void retranslateUi(QMainWindow *interface)
    {
        interface->setWindowTitle(QCoreApplication::translate("interface", "interface", nullptr));
        Main->setHtml(QCoreApplication::translate("interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Carbon Block'; font-size:22pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Nanosecond Thick BRK'; font-size:16pt;\"><br /></p></body></html>", nullptr));
        Debug->setText(QCoreApplication::translate("interface", "Debug", nullptr));
        Assemble->setText(QCoreApplication::translate("interface", "Assemble", nullptr));
        Execute->setText(QCoreApplication::translate("interface", "Execute", nullptr));
        Main_2->setHtml(QCoreApplication::translate("interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Carbon Block'; font-size:22pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Nanosecond Thick BRK'; font-size:16pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class interface: public Ui_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
