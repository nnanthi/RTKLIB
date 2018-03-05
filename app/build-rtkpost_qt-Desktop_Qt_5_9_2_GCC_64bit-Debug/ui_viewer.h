/********************************************************************************
** Form generated from reading UI file 'viewer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWER_H
#define UI_VIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextViewer
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *FindStr;
    QPushButton *BtnFind;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnReload;
    QPushButton *BtnRead;
    QPushButton *BtnOpt;
    QPushButton *BtnClose;
    QPlainTextEdit *Text;

    void setupUi(QWidget *TextViewer)
    {
        if (TextViewer->objectName().isEmpty())
            TextViewer->setObjectName(QStringLiteral("TextViewer"));
        TextViewer->resize(624, 415);
        verticalLayout = new QVBoxLayout(TextViewer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(TextViewer);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        FindStr = new QLineEdit(widget);
        FindStr->setObjectName(QStringLiteral("FindStr"));
        FindStr->setEnabled(true);

        horizontalLayout->addWidget(FindStr);

        BtnFind = new QPushButton(widget);
        BtnFind->setObjectName(QStringLiteral("BtnFind"));
        BtnFind->setEnabled(true);

        horizontalLayout->addWidget(BtnFind);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BtnReload = new QPushButton(widget);
        BtnReload->setObjectName(QStringLiteral("BtnReload"));
        BtnReload->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BtnReload->sizePolicy().hasHeightForWidth());
        BtnReload->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/reload.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnReload->setIcon(icon);
        BtnReload->setFlat(true);

        horizontalLayout->addWidget(BtnReload);

        BtnRead = new QPushButton(widget);
        BtnRead->setObjectName(QStringLiteral("BtnRead"));
        BtnRead->setEnabled(true);

        horizontalLayout->addWidget(BtnRead);

        BtnOpt = new QPushButton(widget);
        BtnOpt->setObjectName(QStringLiteral("BtnOpt"));
        BtnOpt->setEnabled(true);

        horizontalLayout->addWidget(BtnOpt);

        BtnClose = new QPushButton(widget);
        BtnClose->setObjectName(QStringLiteral("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setAutoDefault(true);

        horizontalLayout->addWidget(BtnClose);


        verticalLayout->addWidget(widget);

        Text = new QPlainTextEdit(TextViewer);
        Text->setObjectName(QStringLiteral("Text"));

        verticalLayout->addWidget(Text);


        retranslateUi(TextViewer);

        BtnClose->setDefault(true);


        QMetaObject::connectSlotsByName(TextViewer);
    } // setupUi

    void retranslateUi(QWidget *TextViewer)
    {
        TextViewer->setWindowTitle(QApplication::translate("TextViewer", "TEXT VIEWER", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        TextViewer->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        FindStr->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        FindStr->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnFind->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnFind->setText(QApplication::translate("TextViewer", "&Find", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnReload->setToolTip(QApplication::translate("TextViewer", "Reload", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnReload->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnRead->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnRead->setText(QApplication::translate("TextViewer", "&Read...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnOpt->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnOpt->setText(QApplication::translate("TextViewer", "&Option...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnClose->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnClose->setText(QApplication::translate("TextViewer", "&Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TextViewer: public Ui_TextViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWER_H
