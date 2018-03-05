/********************************************************************************
** Form generated from reading UI file 'logstrdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGSTRDLG_H
#define UI_LOGSTRDLG_H

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

class Ui_LogStrDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label5;
    QCheckBox *Stream1C;
    QLabel *Label6;
    QComboBox *Stream2;
    QComboBox *Stream3;
    QPushButton *BtnStr3;
    QPushButton *BtnStr2;
    QPushButton *BtnStr1;
    QComboBox *SwapIntv;
    QLabel *Label2;
    QPushButton *BtnKey;
    QCheckBox *TimeTagC;
    QLabel *Label1;
    QCheckBox *Stream2C;
    QCheckBox *Stream3C;
    QLabel *LabelF1;
    QLabel *Label10;
    QComboBox *Stream1;
    QCheckBox *OutEventC;
    QPushButton *BtnFile1;
    QPushButton *BtnFile2;
    QPushButton *BtnFile3;
    QLineEdit *FilePath1;
    QLineEdit *FilePath2;
    QLineEdit *FilePath3;
    QPushButton *BtnCancel;
    QPushButton *BtnOk;

    void setupUi(QWidget *LogStrDialog)
    {
        if (LogStrDialog->objectName().isEmpty())
            LogStrDialog->setObjectName(QStringLiteral("LogStrDialog"));
        LogStrDialog->resize(613, 307);
        gridLayout = new QGridLayout(LogStrDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Label5 = new QLabel(LogStrDialog);
        Label5->setObjectName(QStringLiteral("Label5"));
        Label5->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Label5->sizePolicy().hasHeightForWidth());
        Label5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label5, 0, 2, 1, 3);

        Stream1C = new QCheckBox(LogStrDialog);
        Stream1C->setObjectName(QStringLiteral("Stream1C"));

        gridLayout->addWidget(Stream1C, 1, 0, 1, 2);

        Label6 = new QLabel(LogStrDialog);
        Label6->setObjectName(QStringLiteral("Label6"));
        Label6->setEnabled(true);
        sizePolicy.setHeightForWidth(Label6->sizePolicy().hasHeightForWidth());
        Label6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label6, 0, 7, 1, 1);

        Stream2 = new QComboBox(LogStrDialog);
        Stream2->setObjectName(QStringLiteral("Stream2"));
        Stream2->setEnabled(true);

        gridLayout->addWidget(Stream2, 2, 2, 1, 5);

        Stream3 = new QComboBox(LogStrDialog);
        Stream3->setObjectName(QStringLiteral("Stream3"));
        Stream3->setEnabled(true);

        gridLayout->addWidget(Stream3, 3, 2, 1, 5);

        BtnStr3 = new QPushButton(LogStrDialog);
        BtnStr3->setObjectName(QStringLiteral("BtnStr3"));
        BtnStr3->setEnabled(true);

        gridLayout->addWidget(BtnStr3, 3, 7, 1, 1);

        BtnStr2 = new QPushButton(LogStrDialog);
        BtnStr2->setObjectName(QStringLiteral("BtnStr2"));
        BtnStr2->setEnabled(true);

        gridLayout->addWidget(BtnStr2, 2, 7, 1, 1);

        BtnStr1 = new QPushButton(LogStrDialog);
        BtnStr1->setObjectName(QStringLiteral("BtnStr1"));
        BtnStr1->setEnabled(true);

        gridLayout->addWidget(BtnStr1, 1, 7, 1, 1);

        SwapIntv = new QComboBox(LogStrDialog);
        SwapIntv->setObjectName(QStringLiteral("SwapIntv"));
        SwapIntv->setEnabled(true);

        gridLayout->addWidget(SwapIntv, 8, 2, 1, 1);

        Label2 = new QLabel(LogStrDialog);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setEnabled(true);

        gridLayout->addWidget(Label2, 8, 3, 1, 1);

        BtnKey = new QPushButton(LogStrDialog);
        BtnKey->setObjectName(QStringLiteral("BtnKey"));
        BtnKey->setEnabled(true);
        BtnKey->setFlat(true);

        gridLayout->addWidget(BtnKey, 8, 4, 1, 1);

        TimeTagC = new QCheckBox(LogStrDialog);
        TimeTagC->setObjectName(QStringLiteral("TimeTagC"));

        gridLayout->addWidget(TimeTagC, 8, 0, 1, 1);

        Label1 = new QLabel(LogStrDialog);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 8, 1, 1, 1);

        Stream2C = new QCheckBox(LogStrDialog);
        Stream2C->setObjectName(QStringLiteral("Stream2C"));

        gridLayout->addWidget(Stream2C, 2, 0, 1, 2);

        Stream3C = new QCheckBox(LogStrDialog);
        Stream3C->setObjectName(QStringLiteral("Stream3C"));

        gridLayout->addWidget(Stream3C, 3, 0, 1, 2);

        LabelF1 = new QLabel(LogStrDialog);
        LabelF1->setObjectName(QStringLiteral("LabelF1"));
        LabelF1->setEnabled(true);
        sizePolicy.setHeightForWidth(LabelF1->sizePolicy().hasHeightForWidth());
        LabelF1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(LabelF1, 4, 0, 1, 1);

        Label10 = new QLabel(LogStrDialog);
        Label10->setObjectName(QStringLiteral("Label10"));
        Label10->setEnabled(true);
        sizePolicy.setHeightForWidth(Label10->sizePolicy().hasHeightForWidth());
        Label10->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label10, 0, 0, 1, 2);

        Stream1 = new QComboBox(LogStrDialog);
        Stream1->setObjectName(QStringLiteral("Stream1"));
        Stream1->setEnabled(true);

        gridLayout->addWidget(Stream1, 1, 2, 1, 5);

        OutEventC = new QCheckBox(LogStrDialog);
        OutEventC->setObjectName(QStringLiteral("OutEventC"));

        gridLayout->addWidget(OutEventC, 1, 8, 1, 1);

        BtnFile1 = new QPushButton(LogStrDialog);
        BtnFile1->setObjectName(QStringLiteral("BtnFile1"));
        BtnFile1->setEnabled(true);

        gridLayout->addWidget(BtnFile1, 5, 8, 1, 1);

        BtnFile2 = new QPushButton(LogStrDialog);
        BtnFile2->setObjectName(QStringLiteral("BtnFile2"));
        BtnFile2->setEnabled(true);

        gridLayout->addWidget(BtnFile2, 6, 8, 1, 1);

        BtnFile3 = new QPushButton(LogStrDialog);
        BtnFile3->setObjectName(QStringLiteral("BtnFile3"));
        BtnFile3->setEnabled(true);

        gridLayout->addWidget(BtnFile3, 7, 8, 1, 1);

        FilePath1 = new QLineEdit(LogStrDialog);
        FilePath1->setObjectName(QStringLiteral("FilePath1"));
        FilePath1->setEnabled(true);

        gridLayout->addWidget(FilePath1, 5, 0, 1, 8);

        FilePath2 = new QLineEdit(LogStrDialog);
        FilePath2->setObjectName(QStringLiteral("FilePath2"));
        FilePath2->setEnabled(true);

        gridLayout->addWidget(FilePath2, 6, 0, 1, 8);

        FilePath3 = new QLineEdit(LogStrDialog);
        FilePath3->setObjectName(QStringLiteral("FilePath3"));
        FilePath3->setEnabled(true);

        gridLayout->addWidget(FilePath3, 7, 0, 1, 8);

        BtnCancel = new QPushButton(LogStrDialog);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 8, 8, 1, 1);

        BtnOk = new QPushButton(LogStrDialog);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 8, 7, 1, 1);

        QWidget::setTabOrder(Stream1C, Stream1);
        QWidget::setTabOrder(Stream1, BtnStr1);
        QWidget::setTabOrder(BtnStr1, OutEventC);
        QWidget::setTabOrder(OutEventC, Stream2C);
        QWidget::setTabOrder(Stream2C, Stream2);
        QWidget::setTabOrder(Stream2, BtnStr2);
        QWidget::setTabOrder(BtnStr2, Stream3C);
        QWidget::setTabOrder(Stream3C, Stream3);
        QWidget::setTabOrder(Stream3, BtnStr3);
        QWidget::setTabOrder(BtnStr3, FilePath1);
        QWidget::setTabOrder(FilePath1, BtnFile1);
        QWidget::setTabOrder(BtnFile1, FilePath2);
        QWidget::setTabOrder(FilePath2, BtnFile2);
        QWidget::setTabOrder(BtnFile2, FilePath3);
        QWidget::setTabOrder(FilePath3, BtnFile3);
        QWidget::setTabOrder(BtnFile3, TimeTagC);
        QWidget::setTabOrder(TimeTagC, SwapIntv);
        QWidget::setTabOrder(SwapIntv, BtnKey);
        QWidget::setTabOrder(BtnKey, BtnOk);
        QWidget::setTabOrder(BtnOk, BtnCancel);

        retranslateUi(LogStrDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(LogStrDialog);
    } // setupUi

    void retranslateUi(QWidget *LogStrDialog)
    {
        LogStrDialog->setWindowTitle(QApplication::translate("LogStrDialog", "Log Streams", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LogStrDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label5->setText(QApplication::translate("LogStrDialog", "Type", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Stream1C->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Stream1C->setText(QApplication::translate("LogStrDialog", "(6) Rover", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label6->setText(QApplication::translate("LogStrDialog", "Opt", Q_NULLPTR));
        Stream2->clear();
        Stream2->insertItems(0, QStringList()
         << QApplication::translate("LogStrDialog", "Serial", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "TCP Client", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "TCP Server", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "NTRIP Server", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "NTRIP Caster", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "File", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Stream2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Stream3->clear();
        Stream3->insertItems(0, QStringList()
         << QApplication::translate("LogStrDialog", "Serial", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "TCP Client", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "TCP Server", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "NTRIP Server", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "NTRIP Caster", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "File", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Stream3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnStr3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnStr3->setText(QApplication::translate("LogStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnStr2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnStr2->setText(QApplication::translate("LogStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnStr1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnStr1->setText(QApplication::translate("LogStrDialog", "...", Q_NULLPTR));
        SwapIntv->clear();
        SwapIntv->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("LogStrDialog", "0.25", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "0.5", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "1", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "3", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "6", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "12", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "24", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SwapIntv->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("LogStrDialog", "H", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnKey->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnKey->setText(QApplication::translate("LogStrDialog", "?", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TimeTagC->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        TimeTagC->setText(QApplication::translate("LogStrDialog", "Time-Tag", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("LogStrDialog", "Swap Intv", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Stream2C->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Stream2C->setText(QApplication::translate("LogStrDialog", "(7) Base Station", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Stream3C->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Stream3C->setText(QApplication::translate("LogStrDialog", "(8) Correction", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelF1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelF1->setText(QApplication::translate("LogStrDialog", "Log File Paths", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label10->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label10->setText(QApplication::translate("LogStrDialog", "Log Stream", Q_NULLPTR));
        Stream1->clear();
        Stream1->insertItems(0, QStringList()
         << QApplication::translate("LogStrDialog", "Serial", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "TCP Client", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "TCP Server", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "NTRIP Server", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "NTRIP Caster", Q_NULLPTR)
         << QApplication::translate("LogStrDialog", "File", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Stream1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        OutEventC->setText(QApplication::translate("LogStrDialog", "Output Event", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnFile1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnFile1->setText(QApplication::translate("LogStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnFile2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnFile2->setText(QApplication::translate("LogStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnFile3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnFile3->setText(QApplication::translate("LogStrDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FilePath1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FilePath1->setText(QString());
#ifndef QT_NO_TOOLTIP
        FilePath2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FilePath2->setText(QString());
#ifndef QT_NO_TOOLTIP
        FilePath3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FilePath3->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("LogStrDialog", "&Cancel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("LogStrDialog", "&OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogStrDialog: public Ui_LogStrDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGSTRDLG_H
