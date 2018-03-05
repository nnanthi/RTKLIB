/********************************************************************************
** Form generated from reading UI file 'vieweropt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWEROPT_H
#define UI_VIEWEROPT_H

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

class Ui_ViewerOptDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *Label6;
    QLabel *lbColor1;
    QPushButton *BtnColor1;
    QLabel *Label1;
    QLabel *lbColor2;
    QPushButton *BtnColor2;
    QLabel *Label15;
    QLabel *FontLabel;
    QPushButton *BtnFont;
    QPushButton *BtnOk;
    QPushButton *BtnCancel;

    void setupUi(QWidget *ViewerOptDialog)
    {
        if (ViewerOptDialog->objectName().isEmpty())
            ViewerOptDialog->setObjectName(QStringLiteral("ViewerOptDialog"));
        ViewerOptDialog->resize(311, 144);
        gridLayout = new QGridLayout(ViewerOptDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Label6 = new QLabel(ViewerOptDialog);
        Label6->setObjectName(QStringLiteral("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 0, 0, 1, 1);

        lbColor1 = new QLabel(ViewerOptDialog);
        lbColor1->setObjectName(QStringLiteral("lbColor1"));
        lbColor1->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        lbColor1->setPalette(palette);
        lbColor1->setFrameShape(QFrame::Box);
        lbColor1->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lbColor1, 0, 1, 1, 1);

        BtnColor1 = new QPushButton(ViewerOptDialog);
        BtnColor1->setObjectName(QStringLiteral("BtnColor1"));
        BtnColor1->setEnabled(true);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnColor1->setPalette(palette1);

        gridLayout->addWidget(BtnColor1, 0, 2, 1, 1);

        Label1 = new QLabel(ViewerOptDialog);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);

        gridLayout->addWidget(Label1, 1, 0, 1, 1);

        lbColor2 = new QLabel(ViewerOptDialog);
        lbColor2->setObjectName(QStringLiteral("lbColor2"));
        lbColor2->setEnabled(true);
        lbColor2->setFrameShape(QFrame::Box);
        lbColor2->setFrameShadow(QFrame::Sunken);
        lbColor2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbColor2, 1, 1, 1, 1);

        BtnColor2 = new QPushButton(ViewerOptDialog);
        BtnColor2->setObjectName(QStringLiteral("BtnColor2"));
        BtnColor2->setEnabled(true);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnColor2->setPalette(palette2);

        gridLayout->addWidget(BtnColor2, 1, 2, 1, 1);

        Label15 = new QLabel(ViewerOptDialog);
        Label15->setObjectName(QStringLiteral("Label15"));
        Label15->setEnabled(true);

        gridLayout->addWidget(Label15, 2, 0, 1, 1);

        FontLabel = new QLabel(ViewerOptDialog);
        FontLabel->setObjectName(QStringLiteral("FontLabel"));
        FontLabel->setEnabled(true);

        gridLayout->addWidget(FontLabel, 2, 1, 1, 1);

        BtnFont = new QPushButton(ViewerOptDialog);
        BtnFont->setObjectName(QStringLiteral("BtnFont"));
        BtnFont->setEnabled(true);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        BtnFont->setPalette(palette3);

        gridLayout->addWidget(BtnFont, 2, 2, 1, 1);

        BtnOk = new QPushButton(ViewerOptDialog);
        BtnOk->setObjectName(QStringLiteral("BtnOk"));
        BtnOk->setEnabled(true);
        BtnOk->setAutoDefault(true);

        gridLayout->addWidget(BtnOk, 3, 0, 1, 1);

        BtnCancel = new QPushButton(ViewerOptDialog);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setEnabled(true);

        gridLayout->addWidget(BtnCancel, 3, 1, 1, 2);


        retranslateUi(ViewerOptDialog);

        BtnOk->setDefault(true);


        QMetaObject::connectSlotsByName(ViewerOptDialog);
    } // setupUi

    void retranslateUi(QWidget *ViewerOptDialog)
    {
        ViewerOptDialog->setWindowTitle(QApplication::translate("ViewerOptDialog", "Viewer Options", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ViewerOptDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label6->setText(QApplication::translate("ViewerOptDialog", "Text Color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lbColor1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lbColor1->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnColor1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor1->setText(QApplication::translate("ViewerOptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("ViewerOptDialog", "Background Color", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lbColor2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        lbColor2->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnColor2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnColor2->setText(QApplication::translate("ViewerOptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label15->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label15->setText(QApplication::translate("ViewerOptDialog", "Font", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FontLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FontLabel->setText(QApplication::translate("ViewerOptDialog", "Font Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnFont->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnFont->setText(QApplication::translate("ViewerOptDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOk->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOk->setText(QApplication::translate("ViewerOptDialog", "&OK", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCancel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCancel->setText(QApplication::translate("ViewerOptDialog", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewerOptDialog: public Ui_ViewerOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWEROPT_H
