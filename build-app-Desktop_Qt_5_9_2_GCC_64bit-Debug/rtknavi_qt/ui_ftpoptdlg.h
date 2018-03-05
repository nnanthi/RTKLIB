/********************************************************************************
** Form generated from reading UI file 'ftpoptdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FTPOPTDLG_H
#define UI_FTPOPTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FtpOptDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *BtnCancel;
    QLineEdit *User;
    QLabel *Label3;
    QComboBox *Offset;
    QLabel *Label7;
    QLabel *LabelPasswd;
    QLineEdit *Passwd;
    QLabel *Label8;
    QComboBox *PathOffset;
    QLabel *Label9;
    QLabel *Label4;
    QPushButton *BtnOk;
    QLabel *LabelUser;
    QLabel *Label2;
    QPushButton *BtnKey;
    QComboBox *Addr;
    QLabel *Label1;
    QComboBox *Interval;
    QLabel *Label6;
    QSpinBox *RetryInterval;

    void setupUi(QWidget *FtpOptDialog)
    {
        if (FtpOptDialog->objectName().isEmpty())
            FtpOptDialog->setObjectName(QStringLiteral("FtpOptDialog"));
        FtpOptDialog->resize(484, 245);
        gridLayout = new QGridLayout(FtpOptDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        BtnCancel = new QPushButton(FtpOptDialog);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 6, 5, 1, 1);

        User = new QLineEdit(FtpOptDialog);
        User->setObjectName(QStringLiteral("User"));
        User->setEnabled(true);

        gridLayout->addWidget(User, 2, 4, 1, 2);

        Label3 = new QLabel(FtpOptDialog);
        Label3->setObjectName(QStringLiteral("Label3"));
        Label3->setEnabled(true);

        gridLayout->addWidget(Label3, 3, 0, 1, 1);

        Offset = new QComboBox(FtpOptDialog);
        Offset->setObjectName(QStringLiteral("Offset"));
        Offset->setEnabled(true);
        Offset->setEditable(true);

        gridLayout->addWidget(Offset, 3, 1, 1, 1);

        Label7 = new QLabel(FtpOptDialog);
        Label7->setObjectName(QStringLiteral("Label7"));
        Label7->setEnabled(true);

        gridLayout->addWidget(Label7, 3, 2, 1, 1);

        LabelPasswd = new QLabel(FtpOptDialog);
        LabelPasswd->setObjectName(QStringLiteral("LabelPasswd"));
        LabelPasswd->setEnabled(true);

        gridLayout->addWidget(LabelPasswd, 3, 3, 1, 1);

        Passwd = new QLineEdit(FtpOptDialog);
        Passwd->setObjectName(QStringLiteral("Passwd"));
        Passwd->setEnabled(true);

        gridLayout->addWidget(Passwd, 3, 4, 1, 2);

        Label8 = new QLabel(FtpOptDialog);
        Label8->setObjectName(QStringLiteral("Label8"));
        Label8->setEnabled(true);

        gridLayout->addWidget(Label8, 4, 0, 1, 1);

        PathOffset = new QComboBox(FtpOptDialog);
        PathOffset->setObjectName(QStringLiteral("PathOffset"));
        PathOffset->setEnabled(true);
        PathOffset->setEditable(true);

        gridLayout->addWidget(PathOffset, 4, 1, 1, 1);

        Label9 = new QLabel(FtpOptDialog);
        Label9->setObjectName(QStringLiteral("Label9"));
        Label9->setEnabled(true);

        gridLayout->addWidget(Label9, 4, 2, 1, 1);

        Label4 = new QLabel(FtpOptDialog);
        Label4->setObjectName(QStringLiteral("Label4"));
        Label4->setEnabled(true);

        gridLayout->addWidget(Label4, 6, 0, 1, 1);

        BtnOk = new QPushButton(FtpOptDialog);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 6, 3, 1, 2);

        LabelUser = new QLabel(FtpOptDialog);
        LabelUser->setObjectName(QStringLiteral("LabelUser"));
        LabelUser->setEnabled(true);

        gridLayout->addWidget(LabelUser, 2, 3, 1, 1);

        Label2 = new QLabel(FtpOptDialog);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Label2->sizePolicy().hasHeightForWidth());
        Label2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(Label2, 0, 0, 1, 3);

        BtnKey = new QPushButton(FtpOptDialog);
        BtnKey->setObjectName(QStringLiteral("BtnKey"));
        BtnKey->setEnabled(true);
        BtnKey->setFlat(true);

        gridLayout->addWidget(BtnKey, 0, 3, 1, 1);

        Addr = new QComboBox(FtpOptDialog);
        Addr->setObjectName(QStringLiteral("Addr"));
        Addr->setEnabled(true);
        Addr->setEditable(true);

        gridLayout->addWidget(Addr, 1, 0, 1, 6);

        Label1 = new QLabel(FtpOptDialog);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 2, 0, 1, 1);

        Interval = new QComboBox(FtpOptDialog);
        Interval->setObjectName(QStringLiteral("Interval"));
        Interval->setEnabled(true);
        Interval->setEditable(true);

        gridLayout->addWidget(Interval, 2, 1, 1, 1);

        Label6 = new QLabel(FtpOptDialog);
        Label6->setObjectName(QStringLiteral("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 2, 2, 1, 1);

        RetryInterval = new QSpinBox(FtpOptDialog);
        RetryInterval->setObjectName(QStringLiteral("RetryInterval"));
        RetryInterval->setMaximum(10000);
        RetryInterval->setValue(300);

        gridLayout->addWidget(RetryInterval, 6, 1, 1, 1);

        QWidget::setTabOrder(BtnKey, Addr);
        QWidget::setTabOrder(Addr, Interval);
        QWidget::setTabOrder(Interval, User);
        QWidget::setTabOrder(User, Offset);
        QWidget::setTabOrder(Offset, Passwd);
        QWidget::setTabOrder(Passwd, PathOffset);
        QWidget::setTabOrder(PathOffset, RetryInterval);
        QWidget::setTabOrder(RetryInterval, BtnOk);
        QWidget::setTabOrder(BtnOk, BtnCancel);

        retranslateUi(FtpOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(FtpOptDialog);
    } // setupUi

    void retranslateUi(QWidget *FtpOptDialog)
    {
        FtpOptDialog->setWindowTitle(QApplication::translate("FtpOptDialog", "FTP Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FtpOptDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("FtpOptDialog", "&Cancel", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        User->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        User->setText(QApplication::translate("FtpOptDialog", "anonymous", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label3->setText(QApplication::translate("FtpOptDialog", "Download Offset", Q_NULLPTR));
        Offset->clear();
        Offset->insertItems(0, QStringList()
         << QApplication::translate("FtpOptDialog", "0", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "1", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "2", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "3", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "6", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "9", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "12", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "15", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "18", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "21", Q_NULLPTR)
         << QString()
         << QString()
        );
#ifndef QT_NO_TOOLTIP
        Offset->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label7->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label7->setText(QApplication::translate("FtpOptDialog", "H", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelPasswd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelPasswd->setText(QApplication::translate("FtpOptDialog", "Password", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Passwd->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Passwd->setText(QString());
#ifndef QT_NO_TOOLTIP
        Label8->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label8->setText(QApplication::translate("FtpOptDialog", "Time Offset in Path", Q_NULLPTR));
        PathOffset->clear();
        PathOffset->insertItems(0, QStringList()
         << QApplication::translate("FtpOptDialog", "0", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "-1", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "-2", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "-3", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "-6", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "-9", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "-12", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "-15", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "-18", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "-21", Q_NULLPTR)
         << QString()
        );
#ifndef QT_NO_TOOLTIP
        PathOffset->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label9->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label9->setText(QApplication::translate("FtpOptDialog", "H", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label4->setText(QApplication::translate("FtpOptDialog", "Retry Interval", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("FtpOptDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        LabelUser->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        LabelUser->setText(QApplication::translate("FtpOptDialog", "User", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("FtpOptDialog", "Download Address (address/file-path)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnKey->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnKey->setText(QApplication::translate("FtpOptDialog", "?", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Addr->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("FtpOptDialog", "Download Interval", Q_NULLPTR));
        Interval->clear();
        Interval->insertItems(0, QStringList()
         << QApplication::translate("FtpOptDialog", "0", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "1", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "2", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "3", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "6", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "12", Q_NULLPTR)
         << QApplication::translate("FtpOptDialog", "24", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        Interval->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label6->setText(QApplication::translate("FtpOptDialog", "H", Q_NULLPTR));
        RetryInterval->setSuffix(QApplication::translate("FtpOptDialog", " s", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FtpOptDialog: public Ui_FtpOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FTPOPTDLG_H
