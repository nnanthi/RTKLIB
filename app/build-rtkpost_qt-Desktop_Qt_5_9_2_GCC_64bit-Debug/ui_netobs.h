/********************************************************************************
** Form generated from reading UI file 'netobs.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETOBS_H
#define UI_NETOBS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetObsDialog
{
public:
    QDialogButtonBox *buttonBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *NetObsDialog)
    {
        if (NetObsDialog->objectName().isEmpty())
            NetObsDialog->setObjectName(QStringLiteral("NetObsDialog"));
        NetObsDialog->resize(655, 587);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NetObsDialog->sizePolicy().hasHeightForWidth());
        NetObsDialog->setSizePolicy(sizePolicy);
        NetObsDialog->setSizeGripEnabled(true);
        buttonBox = new QDialogButtonBox(NetObsDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(299, 551, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        scrollArea = new QScrollArea(NetObsDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(5, 5, 645, 540));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 643, 538));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(NetObsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NetObsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NetObsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NetObsDialog);
    } // setupUi

    void retranslateUi(QDialog *NetObsDialog)
    {
        NetObsDialog->setWindowTitle(QApplication::translate("NetObsDialog", "Network Station RINEX Files", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NetObsDialog: public Ui_NetObsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETOBS_H
