/********************************************************************************
** Form generated from reading UI file 'outstrdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTSTRDLG_H
#define UI_OUTSTRDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputStrDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label10;
    QLabel *Label5;
    QCheckBox *Stream1C;
    QComboBox *Stream1;
    QPushButton *BtnStr1;
    QComboBox *Format1;
    QCheckBox *Stream2C;
    QComboBox *Stream2;
    QPushButton *BtnStr2;
    QComboBox *Format2;
    QLabel *LabelF1;
    QLineEdit *FilePath1;
    QPushButton *BtnFile1;
    QLineEdit *FilePath2;
    QPushButton *BtnFile2;
    QCheckBox *TimeTagC;
    QLabel *Label1;
    QComboBox *SwapIntv;
    QLabel *Label2;
    QPushButton *BtnKey;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;
    QLabel *Label6;
    QLabel *Label7;

    void setupUi(QWidget *OutputStrDialog)
    {
        if (OutputStrDialog->objectName().isEmpty())
            OutputStrDialog->setObjectName(QStringLiteral("OutputStrDialog"));
        OutputStrDialog->resize(581, 287);
        gridLayout = new QGridLayout(OutputStrDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Label10 = new QLabel(OutputStrDialog);
        Label10->setObjectName(QStringLiteral("Label10"));
        Label10->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Label10->sizePolicy().hasHeightForWidth());
        Label10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label10, 0, 0, 1, 2);

        Label5 = new QLabel(OutputStrDialog);
        Label5->setObjectName(QStringLiteral("Label5"));
        Label5->setEnabled(true);
        sizePolicy.setHeightForWidth(Label5->sizePolicy().hasHeightForWidth());
        Label5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label5, 0, 3, 1, 3);

        Stream1C = new QCheckBox(OutputStrDialog);
        Stream1C->setObjectName(QStringLiteral("Stream1C"));

        gridLayout->addWidget(Stream1C, 1, 0, 1, 3);

        Stream1 = new QComboBox(OutputStrDialog);
        Stream1->setObjectName(QStringLiteral("Stream1"));
        Stream1->setEnabled(true);

        gridLayout->addWidget(Stream1, 1, 3, 1, 4);

        BtnStr1 = new QPushButton(OutputStrDialog);
        BtnStr1->setObjectName(QStringLiteral("BtnStr1"));
        BtnStr1->setEnabled(true);

        gridLayout->addWidget(BtnStr1, 1, 7, 1, 1);

        Format1 = new QComboBox(OutputStrDialog);
        Format1->setObjectName(QStringLiteral("Format1"));
        Format1->setEnabled(true);

        gridLayout->addWidget(Format1, 1, 8, 1, 3);

        Stream2C = new QCheckBox(OutputStrDialog);
        Stream2C->setObjectName(QStringLiteral("Stream2C"));

        gridLayout->addWidget(Stream2C, 2, 0, 1, 3);

        Stream2 = new QComboBox(OutputStrDialog);
        Stream2->setObjectName(QStringLiteral("Stream2"));
        Stream2->setEnabled(true);

        gridLayout->addWidget(Stream2, 2, 3, 1, 4);

        BtnStr2 = new QPushButton(OutputStrDialog);
        BtnStr2->setObjectName(QStringLiteral("BtnStr2"));
        BtnStr2->setEnabled(true);

        gridLayout->addWidget(BtnStr2, 2, 7, 1, 1);

        Format2 = new QComboBox(OutputStrDialog);
        Format2->setObjectName(QStringLiteral("Format2"));
        Format2->setEnabled(true);

        gridLayout->addWidget(Format2, 2, 8, 1, 3);

        LabelF1 = new QLabel(OutputStrDialog);
        LabelF1->setObjectName(QStringLiteral("LabelF1"));
        LabelF1->setEnabled(true);
        sizePolicy.setHeightForWidth(LabelF1->sizePolicy().hasHeightForWidth());
        LabelF1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(LabelF1, 3, 0, 1, 2);

        FilePath1 = new QLineEdit(OutputStrDialog);
        FilePath1->setObjectName(QStringLiteral("FilePath1"));
        FilePath1->setEnabled(true);

        gridLayout->addWidget(FilePath1, 4, 0, 1, 10);

        BtnFile1 = new QPushButton(OutputStrDialog);
        BtnFile1->setObjectName(QStringLiteral("BtnFile1"));
        BtnFile1->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnFile1->setPalette(palette);

        gridLayout->addWidget(BtnFile1, 4, 10, 1, 1);

        FilePath2 = new QLineEdit(OutputStrDialog);
        FilePath2->setObjectName(QStringLiteral("FilePath2"));
        FilePath2->setEnabled(true);

        gridLayout->addWidget(FilePath2, 5, 0, 1, 10);

        BtnFile2 = new QPushButton(OutputStrDialog);
        BtnFile2->setObjectName(QStringLiteral("BtnFile2"));
        BtnFile2->setEnabled(true);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnFile2->setPalette(palette1);

        gridLayout->addWidget(BtnFile2, 5, 10, 1, 1);

        TimeTagC = new QCheckBox(OutputStrDialog);
        TimeTagC->setObjectName(QStringLiteral("TimeTagC"));

        gridLayout->addWidget(TimeTagC, 6, 0, 1, 1);

        Label1 = new QLabel(OutputStrDialog);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 6, 1, 1, 1);

        SwapIntv = new QComboBox(OutputStrDialog);
        SwapIntv->setObjectName(QStringLiteral("SwapIntv"));
        SwapIntv->setEnabled(true);
        SwapIntv->setEditable(true);

        gridLayout->addWidget(SwapIntv, 6, 2, 1, 2);

        Label2 = new QLabel(OutputStrDialog);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 6, 4, 1, 1);

        BtnKey = new QPushButton(OutputStrDialog);
        BtnKey->setObjectName(QStringLiteral("BtnKey"));
        BtnKey->setEnabled(true);
        BtnKey->setFlat(true);

        gridLayout->addWidget(BtnKey, 6, 5, 1, 1);

        BtnOk = new QPushButton(OutputStrDialog);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 6, 6, 1, 3);

        BtnCancel = new QPushButton(OutputStrDialog);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 6, 9, 1, 2);

        Label6 = new QLabel(OutputStrDialog);
        Label6->setObjectName(QStringLiteral("Label6"));
        Label6->setEnabled(true);
        sizePolicy.setHeightForWidth(Label6->sizePolicy().hasHeightForWidth());
        Label6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label6, 0, 7, 1, 1);

        Label7 = new QLabel(OutputStrDialog);
        Label7->setObjectName(QStringLiteral("Label7"));
        Label7->setEnabled(true);
        sizePolicy.setHeightForWidth(Label7->sizePolicy().hasHeightForWidth());
        Label7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label7, 0, 8, 1, 1);


        retranslateUi(OutputStrDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(OutputStrDialog);
    } // setupUi

    void retranslateUi(QWidget *OutputStrDialog)
    {
        OutputStrDialog->setWindowTitle(QApplication::translate("OutputStrDialog", "Output Streams", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        OutputStrDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label10->setText(QApplication::translate("OutputStrDialog", "Output Stream", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label5->setText(QApplication::translate("OutputStrDialog", "Type", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Stream1C->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Stream1C->setText(QApplication::translate("OutputStrDialog", "(4) Solution 1", Q_NULLPTR));
        Stream1->clear();
        Stream1->insertItems(0, QStringList()
         << QApplication::translate("OutputStrDialog", "Serial", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "TCP Client", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "TCP Server", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "NTRIP Server", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "NTRIP Caster", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "File", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Stream1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnStr1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnStr1->setText(QApplication::translate("OutputStrDialog", "...", Q_NULLPTR));
        Format1->clear();
        Format1->insertItems(0, QStringList()
         << QApplication::translate("OutputStrDialog", "Lat/Lon/Height", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "X/Y/Z-ECEF", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "E/N/U-Baseline", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "NMEA0183", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "Solution Status", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Format1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Stream2C->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Stream2C->setText(QApplication::translate("OutputStrDialog", "(5) Solution 2", Q_NULLPTR));
        Stream2->clear();
        Stream2->insertItems(0, QStringList()
         << QApplication::translate("OutputStrDialog", "Serial", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "TCP Client", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "TCP Server", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "NTRIP Server", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "NTRIP Caster", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "File", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Stream2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnStr2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnStr2->setText(QApplication::translate("OutputStrDialog", "...", Q_NULLPTR));
        Format2->clear();
        Format2->insertItems(0, QStringList()
         << QApplication::translate("OutputStrDialog", "Lat/Lon/Height", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "X/Y/Z-ECEF", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "E/N/U-Baseline", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "NMEA0183", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "Solution Status", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Format2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        LabelF1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelF1->setText(QApplication::translate("OutputStrDialog", "Output File Paths", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FilePath1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FilePath1->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnFile1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnFile1->setText(QApplication::translate("OutputStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FilePath2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FilePath2->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnFile2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnFile2->setText(QApplication::translate("OutputStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TimeTagC->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TimeTagC->setText(QApplication::translate("OutputStrDialog", "Time-Tag", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("OutputStrDialog", "Swap Intv", Q_NULLPTR));
        SwapIntv->clear();
        SwapIntv->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("OutputStrDialog", "0.25", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "0.5", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "1", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "3", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "6", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "12", Q_NULLPTR)
         << QApplication::translate("OutputStrDialog", "24", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SwapIntv->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("OutputStrDialog", "H", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnKey->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnKey->setText(QApplication::translate("OutputStrDialog", "?", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("OutputStrDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("OutputStrDialog", "&Cancel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label6->setText(QApplication::translate("OutputStrDialog", "Option", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label7->setText(QApplication::translate("OutputStrDialog", "Format", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OutputStrDialog: public Ui_OutputStrDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTSTRDLG_H
