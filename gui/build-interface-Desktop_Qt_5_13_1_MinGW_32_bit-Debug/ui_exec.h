/********************************************************************************
** Form generated from reading UI file 'exec.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXEC_H
#define UI_EXEC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Exec
{
public:
    QTextEdit *MEMADDR;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *Exit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *R5VAL;
    QTextEdit *R4VAL;
    QTextEdit *PCVAL;
    QTextEdit *NZPVAL;
    QTextEdit *R2VAL;
    QTextEdit *R0VAL;
    QTextEdit *R3VAL;
    QTextEdit *R7VAL;
    QTextEdit *R1VAL;
    QTextEdit *R6VAL;
    QTextEdit *MDRVAL;
    QTextEdit *IRVAL;

    void setupUi(QDialog *Exec)
    {
        if (Exec->objectName().isEmpty())
            Exec->setObjectName(QString::fromUtf8("Exec"));
        Exec->resize(477, 740);
        Exec->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        MEMADDR = new QTextEdit(Exec);
        MEMADDR->setObjectName(QString::fromUtf8("MEMADDR"));
        MEMADDR->setGeometry(QRect(50, 670, 201, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("8514oem"));
        font.setBold(true);
        font.setWeight(75);
        MEMADDR->setFont(font);
        MEMADDR->setReadOnly(true);
        label_13 = new QLabel(Exec);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(50, 620, 191, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("8514oem"));
        font1.setPointSize(25);
        label_13->setFont(font1);
        label_14 = new QLabel(Exec);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(150, 10, 121, 21));
        label_14->setFont(font1);
        Exit = new QPushButton(Exec);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(280, 670, 171, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("LED BOARD REVERSED"));
        font2.setPointSize(8);
        Exit->setFont(font2);
        Exit->setStyleSheet(QString::fromUtf8("background-color : rgb(152, 152, 152)"));
        verticalLayoutWidget = new QWidget(Exec);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(50, 50, 61, 541));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        verticalLayout->addWidget(label_7);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        verticalLayout->addWidget(label_8);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        verticalLayout->addWidget(label_9);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        verticalLayout->addWidget(label_10);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);

        verticalLayout->addWidget(label_11);

        label_12 = new QLabel(verticalLayoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);

        verticalLayout->addWidget(label_12);

        gridLayoutWidget = new QWidget(Exec);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(140, 50, 191, 541));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        R5VAL = new QTextEdit(gridLayoutWidget);
        R5VAL->setObjectName(QString::fromUtf8("R5VAL"));
        R5VAL->setFont(font);
        R5VAL->setReadOnly(true);

        gridLayout->addWidget(R5VAL, 9, 0, 1, 1);

        R4VAL = new QTextEdit(gridLayoutWidget);
        R4VAL->setObjectName(QString::fromUtf8("R4VAL"));
        R4VAL->setFont(font);
        R4VAL->setReadOnly(true);

        gridLayout->addWidget(R4VAL, 8, 0, 1, 1);

        PCVAL = new QTextEdit(gridLayoutWidget);
        PCVAL->setObjectName(QString::fromUtf8("PCVAL"));
        PCVAL->setFont(font);
        PCVAL->setReadOnly(true);

        gridLayout->addWidget(PCVAL, 1, 0, 1, 1);

        NZPVAL = new QTextEdit(gridLayoutWidget);
        NZPVAL->setObjectName(QString::fromUtf8("NZPVAL"));
        NZPVAL->setFont(font);
        NZPVAL->setReadOnly(true);

        gridLayout->addWidget(NZPVAL, 12, 0, 1, 1);

        R2VAL = new QTextEdit(gridLayoutWidget);
        R2VAL->setObjectName(QString::fromUtf8("R2VAL"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("8514oem"));
        R2VAL->setFont(font3);
        R2VAL->setReadOnly(true);

        gridLayout->addWidget(R2VAL, 6, 0, 1, 1);

        R0VAL = new QTextEdit(gridLayoutWidget);
        R0VAL->setObjectName(QString::fromUtf8("R0VAL"));
        R0VAL->setFont(font3);
        R0VAL->setReadOnly(true);

        gridLayout->addWidget(R0VAL, 4, 0, 1, 1);

        R3VAL = new QTextEdit(gridLayoutWidget);
        R3VAL->setObjectName(QString::fromUtf8("R3VAL"));
        R3VAL->setFont(font3);
        R3VAL->setReadOnly(true);

        gridLayout->addWidget(R3VAL, 7, 0, 1, 1);

        R7VAL = new QTextEdit(gridLayoutWidget);
        R7VAL->setObjectName(QString::fromUtf8("R7VAL"));
        R7VAL->setFont(font);
        R7VAL->setReadOnly(true);

        gridLayout->addWidget(R7VAL, 11, 0, 1, 1);

        R1VAL = new QTextEdit(gridLayoutWidget);
        R1VAL->setObjectName(QString::fromUtf8("R1VAL"));
        R1VAL->setFont(font3);
        R1VAL->setReadOnly(true);

        gridLayout->addWidget(R1VAL, 5, 0, 1, 1);

        R6VAL = new QTextEdit(gridLayoutWidget);
        R6VAL->setObjectName(QString::fromUtf8("R6VAL"));
        R6VAL->setFont(font);
        R6VAL->setReadOnly(true);

        gridLayout->addWidget(R6VAL, 10, 0, 1, 1);

        MDRVAL = new QTextEdit(gridLayoutWidget);
        MDRVAL->setObjectName(QString::fromUtf8("MDRVAL"));
        MDRVAL->setFont(font);
        MDRVAL->setReadOnly(true);

        gridLayout->addWidget(MDRVAL, 3, 0, 1, 1);

        IRVAL = new QTextEdit(gridLayoutWidget);
        IRVAL->setObjectName(QString::fromUtf8("IRVAL"));
        IRVAL->setFont(font);
        IRVAL->setReadOnly(true);

        gridLayout->addWidget(IRVAL, 2, 0, 1, 1);


        retranslateUi(Exec);

        QMetaObject::connectSlotsByName(Exec);
    } // setupUi

    void retranslateUi(QDialog *Exec)
    {
        Exec->setWindowTitle(QCoreApplication::translate("Exec", "Dialog", nullptr));
        MEMADDR->setHtml(QCoreApplication::translate("Exec", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'8514oem'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-weight:400;\"><br /></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("Exec", "<html><head/><body><p><span style=\" color:#00960c;\">MEMORY ADDRESS :</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("Exec", "<html><head/><body><p><span style=\" color:#00a218;\">VALUE :</span></p><p><br/></p></body></html>", nullptr));
        Exit->setText(QCoreApplication::translate("Exec", "Exit", nullptr));
        label->setText(QCoreApplication::translate("Exec", "<html><head/><body><p><span style=\" color:#00960c;\">PC :</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Exec", "<html><head/><body><p><span style=\" color:#00960c;\">IR   :</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Exec", "<html><head/><body><p><span style=\" color:#00960c;\">MDR :</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Exec", "<html><head/><body><p><span style=\" color:#00960c;\">R0 :</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Exec", "<html><head/><body><p><span style=\" color:#00960c;\">R1 :</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Exec", "<html><head/><body><p><span style=\" color:#00960c;\">R2 :</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Exec", "<html><head/><body><p><span style=\" color:#00960c;\">R3 :</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Exec", "<html><head/><body><p><span style=\" color:#00960c;\">R4 :</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("Exec", "<html><head/><body><p><span style=\" color:#00960c;\">R5 :</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("Exec", "<html><head/><body><p><span style=\" color:#00960c;\">R6 :</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("Exec", "<html><head/><body><p><span style=\" color:#00960c;\">R7 :</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("Exec", "<html><head/><body><p><span style=\" color:#00960c;\">NZP :</span></p></body></html>", nullptr));
        R5VAL->setHtml(QCoreApplication::translate("Exec", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'8514oem'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-weight:400;\"><br /></p></body></html>", nullptr));
        R4VAL->setHtml(QCoreApplication::translate("Exec", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'8514oem'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-weight:400;\"><br /></p></body></html>", nullptr));
        PCVAL->setHtml(QCoreApplication::translate("Exec", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'8514oem'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-weight:400;\"><br /></p></body></html>", nullptr));
        NZPVAL->setHtml(QCoreApplication::translate("Exec", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'8514oem'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-weight:400;\"><br /></p></body></html>", nullptr));
        R2VAL->setHtml(QCoreApplication::translate("Exec", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'8514oem'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p></body></html>", nullptr));
        R0VAL->setHtml(QCoreApplication::translate("Exec", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'8514oem'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p></body></html>", nullptr));
        R3VAL->setHtml(QCoreApplication::translate("Exec", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'8514oem'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p></body></html>", nullptr));
        R7VAL->setHtml(QCoreApplication::translate("Exec", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'8514oem'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-weight:400;\"><br /></p></body></html>", nullptr));
        R1VAL->setHtml(QCoreApplication::translate("Exec", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'8514oem'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p></body></html>", nullptr));
        R6VAL->setHtml(QCoreApplication::translate("Exec", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'8514oem'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-weight:400;\"><br /></p></body></html>", nullptr));
        MDRVAL->setHtml(QCoreApplication::translate("Exec", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'8514oem'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-weight:400;\"><br /></p></body></html>", nullptr));
        IRVAL->setHtml(QCoreApplication::translate("Exec", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'8514oem'; font-size:8.25pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-weight:400;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Exec: public Ui_Exec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXEC_H
