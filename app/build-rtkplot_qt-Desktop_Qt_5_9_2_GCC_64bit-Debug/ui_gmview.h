/********************************************************************************
** Form generated from reading UI file 'gmview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GMVIEW_H
#define UI_GMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GoogleMapView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnFixCent;
    QPushButton *BtnShrink;
    QPushButton *BtnExpand;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnClose;
    QWidget *Panel2;

    void setupUi(QWidget *GoogleMapView)
    {
        if (GoogleMapView->objectName().isEmpty())
            GoogleMapView->setObjectName(QStringLiteral("GoogleMapView"));
        GoogleMapView->resize(504, 506);
        verticalLayout = new QVBoxLayout(GoogleMapView);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Panel1 = new QWidget(GoogleMapView);
        Panel1->setObjectName(QStringLiteral("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(Panel1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnFixCent = new QPushButton(Panel1);
        BtnFixCent->setObjectName(QStringLiteral("BtnFixCent"));
        BtnFixCent->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/buttons/trackc.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnFixCent->setIcon(icon);
        BtnFixCent->setCheckable(true);
        BtnFixCent->setFlat(true);

        horizontalLayout->addWidget(BtnFixCent);

        BtnShrink = new QPushButton(Panel1);
        BtnShrink->setObjectName(QStringLiteral("BtnShrink"));
        BtnShrink->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/buttons/shrink.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnShrink->setIcon(icon1);
        BtnShrink->setFlat(true);

        horizontalLayout->addWidget(BtnShrink);

        BtnExpand = new QPushButton(Panel1);
        BtnExpand->setObjectName(QStringLiteral("BtnExpand"));
        BtnExpand->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/buttons/expand.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        BtnExpand->setIcon(icon2);
        BtnExpand->setFlat(true);

        horizontalLayout->addWidget(BtnExpand);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BtnClose = new QPushButton(Panel1);
        BtnClose->setObjectName(QStringLiteral("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setAutoDefault(true);

        horizontalLayout->addWidget(BtnClose);


        verticalLayout->addWidget(Panel1);

        Panel2 = new QWidget(GoogleMapView);
        Panel2->setObjectName(QStringLiteral("Panel2"));
        Panel2->setEnabled(true);
        Panel2->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(Panel2);


        retranslateUi(GoogleMapView);

        BtnClose->setDefault(true);


        QMetaObject::connectSlotsByName(GoogleMapView);
    } // setupUi

    void retranslateUi(QWidget *GoogleMapView)
    {
        GoogleMapView->setWindowTitle(QApplication::translate("GoogleMapView", "Google Map View", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GoogleMapView->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        BtnFixCent->setToolTip(QApplication::translate("GoogleMapView", "Fix Plot Center", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        BtnFixCent->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnShrink->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnShrink->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnExpand->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnExpand->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtnClose->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnClose->setText(QApplication::translate("GoogleMapView", "Close", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel2->setProperty("text", QVariant(QString()));
    } // retranslateUi

};

namespace Ui {
    class GoogleMapView: public Ui_GoogleMapView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GMVIEW_H
