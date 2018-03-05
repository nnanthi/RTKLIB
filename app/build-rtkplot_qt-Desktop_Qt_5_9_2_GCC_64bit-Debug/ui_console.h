/********************************************************************************
** Form generated from reading UI file 'console.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSOLE_H
#define UI_CONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Console
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnAsc;
    QPushButton *BtnHex;
    QPushButton *BtnStop;
    QPushButton *BtnDown;
    QPushButton *BtnClear;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnClose;
    QPlainTextEdit *textEdit;

    void setupUi(QWidget *Console)
    {
        if (Console->objectName().isEmpty())
            Console->setObjectName(QStringLiteral("Console"));
        Console->resize(640, 434);
        verticalLayout = new QVBoxLayout(Console);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Panel1 = new QWidget(Console);
        Panel1->setObjectName(QStringLiteral("Panel1"));
        Panel1->setEnabled(true);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(Panel1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnAsc = new QPushButton(Panel1);
        BtnAsc->setObjectName(QStringLiteral("BtnAsc"));
        BtnAsc->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BtnAsc->sizePolicy().hasHeightForWidth());
        BtnAsc->setSizePolicy(sizePolicy);
        BtnAsc->setCheckable(true);
        BtnAsc->setFlat(true);

        horizontalLayout->addWidget(BtnAsc);

        BtnHex = new QPushButton(Panel1);
        BtnHex->setObjectName(QStringLiteral("BtnHex"));
        BtnHex->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnHex->sizePolicy().hasHeightForWidth());
        BtnHex->setSizePolicy(sizePolicy);
        BtnHex->setCheckable(true);
        BtnHex->setFlat(true);

        horizontalLayout->addWidget(BtnHex);

        BtnStop = new QPushButton(Panel1);
        BtnStop->setObjectName(QStringLiteral("BtnStop"));
        BtnStop->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnStop->sizePolicy().hasHeightForWidth());
        BtnStop->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/pause.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnStop->setIcon(icon);
        BtnStop->setCheckable(true);
        BtnStop->setFlat(true);

        horizontalLayout->addWidget(BtnStop);

        BtnDown = new QPushButton(Panel1);
        BtnDown->setObjectName(QStringLiteral("BtnDown"));
        BtnDown->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnDown->sizePolicy().hasHeightForWidth());
        BtnDown->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/buttons/fitd.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnDown->setIcon(icon1);
        BtnDown->setFlat(true);

        horizontalLayout->addWidget(BtnDown);

        BtnClear = new QPushButton(Panel1);
        BtnClear->setObjectName(QStringLiteral("BtnClear"));
        BtnClear->setEnabled(true);
        sizePolicy.setHeightForWidth(BtnClear->sizePolicy().hasHeightForWidth());
        BtnClear->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/buttons/del.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnClear->setIcon(icon2);
        BtnClear->setFlat(true);

        horizontalLayout->addWidget(BtnClear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BtnClose = new QPushButton(Panel1);
        BtnClose->setObjectName(QStringLiteral("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setFlat(false);

        horizontalLayout->addWidget(BtnClose);


        verticalLayout->addWidget(Panel1);

        textEdit = new QPlainTextEdit(Console);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);


        retranslateUi(Console);

        QMetaObject::connectSlotsByName(Console);
    } // setupUi

    void retranslateUi(QWidget *Console)
    {
        Console->setWindowTitle(QApplication::translate("Console", "Console", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Console->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnAsc->setToolTip(QApplication::translate("Console", "Ascii View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnAsc->setText(QApplication::translate("Console", "ASC", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnHex->setToolTip(QApplication::translate("Console", "Hex View", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnHex->setText(QApplication::translate("Console", "HEX", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnStop->setToolTip(QApplication::translate("Console", "Pause", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnStop->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnDown->setToolTip(QApplication::translate("Console", "Scroll Down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnDown->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnClear->setToolTip(QApplication::translate("Console", "Clear", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnClear->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnClose->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnClose->setText(QApplication::translate("Console", "&Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Console: public Ui_Console {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSOLE_H
