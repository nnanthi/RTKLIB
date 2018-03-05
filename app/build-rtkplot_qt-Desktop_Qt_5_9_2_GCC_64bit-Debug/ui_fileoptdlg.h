/********************************************************************************
** Form generated from reading UI file 'fileoptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEOPTDLG_H
#define UI_FILEOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileOptDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label1;
    QPushButton *BtnFilePath;
    QLineEdit *FilePath;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *ChkTimeTag;
    QLabel *Label4;
    QComboBox *SwapIntv;
    QLabel *Label5;
    QCheckBox *Chk64Bit;
    QPushButton *BtnKey;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;
    QDoubleSpinBox *TimeStart;
    QComboBox *TimeSpeed;
    QLabel *Label2;

    void setupUi(QWidget *FileOptDialog)
    {
        if (FileOptDialog->objectName().isEmpty())
            FileOptDialog->setObjectName(QStringLiteral("FileOptDialog"));
        FileOptDialog->resize(527, 158);
        gridLayout = new QGridLayout(FileOptDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Label1 = new QLabel(FileOptDialog);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 2, 0, 1, 1);

        BtnFilePath = new QPushButton(FileOptDialog);
        BtnFilePath->setObjectName(QStringLiteral("BtnFilePath"));
        BtnFilePath->setEnabled(true);

        gridLayout->addWidget(BtnFilePath, 2, 5, 1, 1);

        FilePath = new QLineEdit(FileOptDialog);
        FilePath->setObjectName(QStringLiteral("FilePath"));
        FilePath->setEnabled(true);

        gridLayout->addWidget(FilePath, 2, 2, 1, 1);

        widget = new QWidget(FileOptDialog);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ChkTimeTag = new QCheckBox(widget);
        ChkTimeTag->setObjectName(QStringLiteral("ChkTimeTag"));

        horizontalLayout->addWidget(ChkTimeTag);

        Label4 = new QLabel(widget);
        Label4->setObjectName(QStringLiteral("Label4"));
        Label4->setEnabled(true);

        horizontalLayout->addWidget(Label4);

        SwapIntv = new QComboBox(widget);
        SwapIntv->setObjectName(QStringLiteral("SwapIntv"));
        SwapIntv->setEnabled(true);
        SwapIntv->setEditable(true);

        horizontalLayout->addWidget(SwapIntv);

        Label5 = new QLabel(widget);
        Label5->setObjectName(QStringLiteral("Label5"));
        Label5->setEnabled(true);

        horizontalLayout->addWidget(Label5);

        Chk64Bit = new QCheckBox(widget);
        Chk64Bit->setObjectName(QStringLiteral("Chk64Bit"));

        horizontalLayout->addWidget(Chk64Bit);

        BtnKey = new QPushButton(widget);
        BtnKey->setObjectName(QStringLiteral("BtnKey"));
        BtnKey->setEnabled(true);
        BtnKey->setFlat(true);

        horizontalLayout->addWidget(BtnKey);

        BtnOk = new QPushButton(widget);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        horizontalLayout->addWidget(BtnOk);

        BtnCancel = new QPushButton(widget);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        horizontalLayout->addWidget(BtnCancel);


        gridLayout->addWidget(widget, 3, 0, 1, 8);

        TimeStart = new QDoubleSpinBox(FileOptDialog);
        TimeStart->setObjectName(QStringLiteral("TimeStart"));
        TimeStart->setMaximum(10000);

        gridLayout->addWidget(TimeStart, 1, 2, 1, 1);

        TimeSpeed = new QComboBox(FileOptDialog);
        TimeSpeed->setObjectName(QStringLiteral("TimeSpeed"));
        TimeSpeed->setEnabled(true);

        gridLayout->addWidget(TimeSpeed, 1, 0, 1, 1);

        Label2 = new QLabel(FileOptDialog);
        Label2->setObjectName(QStringLiteral("Label2"));

        gridLayout->addWidget(Label2, 1, 1, 1, 1);

        QWidget::setTabOrder(TimeSpeed, TimeStart);
        QWidget::setTabOrder(TimeStart, FilePath);
        QWidget::setTabOrder(FilePath, BtnFilePath);
        QWidget::setTabOrder(BtnFilePath, ChkTimeTag);
        QWidget::setTabOrder(ChkTimeTag, SwapIntv);
        QWidget::setTabOrder(SwapIntv, BtnKey);
        QWidget::setTabOrder(BtnKey, BtnOk);
        QWidget::setTabOrder(BtnOk, BtnCancel);

        retranslateUi(FileOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(FileOptDialog);
    } // setupUi

    void retranslateUi(QWidget *FileOptDialog)
    {
        FileOptDialog->setWindowTitle(QApplication::translate("FileOptDialog", "File Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FileOptDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("FileOptDialog", "File Path", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnFilePath->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnFilePath->setText(QApplication::translate("FileOptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FilePath->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FilePath->setText(QString());
#ifndef QT_NO_TOOLTIP
        ChkTimeTag->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ChkTimeTag->setText(QApplication::translate("FileOptDialog", "Time", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label4->setText(QApplication::translate("FileOptDialog", "Swap Intv", Q_NULLPTR));
        SwapIntv->clear();
        SwapIntv->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("FileOptDialog", "0.25", Q_NULLPTR)
         << QApplication::translate("FileOptDialog", "0.5", Q_NULLPTR)
         << QApplication::translate("FileOptDialog", "1", Q_NULLPTR)
         << QApplication::translate("FileOptDialog", "2", Q_NULLPTR)
         << QApplication::translate("FileOptDialog", "3", Q_NULLPTR)
         << QApplication::translate("FileOptDialog", "6", Q_NULLPTR)
         << QApplication::translate("FileOptDialog", "12", Q_NULLPTR)
         << QApplication::translate("FileOptDialog", "24", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        SwapIntv->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label5->setText(QApplication::translate("FileOptDialog", "H", Q_NULLPTR));
        Chk64Bit->setText(QApplication::translate("FileOptDialog", "64bit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnKey->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnKey->setText(QApplication::translate("FileOptDialog", "?", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("FileOptDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("FileOptDialog", "&Cancel", Q_NULLPTR));
        TimeStart->setSuffix(QApplication::translate("FileOptDialog", " s", Q_NULLPTR));
        TimeSpeed->clear();
        TimeSpeed->insertItems(0, QStringList()
         << QApplication::translate("FileOptDialog", "x0.1", Q_NULLPTR)
         << QApplication::translate("FileOptDialog", "x0.2", Q_NULLPTR)
         << QApplication::translate("FileOptDialog", "x0.5", Q_NULLPTR)
         << QApplication::translate("FileOptDialog", "x1", Q_NULLPTR)
         << QApplication::translate("FileOptDialog", "x2", Q_NULLPTR)
         << QApplication::translate("FileOptDialog", "x5", Q_NULLPTR)
         << QApplication::translate("FileOptDialog", "x10", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        TimeSpeed->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("FileOptDialog", "+", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FileOptDialog: public Ui_FileOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEOPTDLG_H
