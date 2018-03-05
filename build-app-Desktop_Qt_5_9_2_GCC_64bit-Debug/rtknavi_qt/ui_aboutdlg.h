/********************************************************************************
** Form generated from reading UI file 'aboutdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDLG_H
#define UI_ABOUTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutDlg
{
public:
    QGridLayout *gridLayout;
    QPushButton *pbOkay;
    QLabel *lbAbout;
    QLabel *lbVersion;
    QLabel *lbCopyright;
    QLabel *wgIcon;

    void setupUi(QWidget *AboutDlg)
    {
        if (AboutDlg->objectName().isEmpty())
            AboutDlg->setObjectName(QStringLiteral("AboutDlg"));
        AboutDlg->resize(300, 179);
        gridLayout = new QGridLayout(AboutDlg);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pbOkay = new QPushButton(AboutDlg);
        pbOkay->setObjectName(QStringLiteral("pbOkay"));
        pbOkay->setAutoDefault(true);

        gridLayout->addWidget(pbOkay, 3, 1, 1, 1);

        lbAbout = new QLabel(AboutDlg);
        lbAbout->setObjectName(QStringLiteral("lbAbout"));

        gridLayout->addWidget(lbAbout, 0, 1, 1, 1);

        lbVersion = new QLabel(AboutDlg);
        lbVersion->setObjectName(QStringLiteral("lbVersion"));

        gridLayout->addWidget(lbVersion, 1, 1, 1, 1);

        lbCopyright = new QLabel(AboutDlg);
        lbCopyright->setObjectName(QStringLiteral("lbCopyright"));

        gridLayout->addWidget(lbCopyright, 2, 1, 1, 1);

        wgIcon = new QLabel(AboutDlg);
        wgIcon->setObjectName(QStringLiteral("wgIcon"));

        gridLayout->addWidget(wgIcon, 0, 0, 3, 1);


        retranslateUi(AboutDlg);

        pbOkay->setDefault(true);


        QMetaObject::connectSlotsByName(AboutDlg);
    } // setupUi

    void retranslateUi(QWidget *AboutDlg)
    {
        AboutDlg->setWindowTitle(QApplication::translate("AboutDlg", "About", Q_NULLPTR));
        pbOkay->setText(QApplication::translate("AboutDlg", "&Okay", Q_NULLPTR));
        lbAbout->setText(QApplication::translate("AboutDlg", "TextLabel", Q_NULLPTR));
        lbVersion->setText(QApplication::translate("AboutDlg", "TextLabel", Q_NULLPTR));
        lbCopyright->setText(QApplication::translate("AboutDlg", "TextLabel", Q_NULLPTR));
        wgIcon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutDlg: public Ui_AboutDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDLG_H
