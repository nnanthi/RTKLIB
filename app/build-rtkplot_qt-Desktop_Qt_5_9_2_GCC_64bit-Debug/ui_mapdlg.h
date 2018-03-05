/********************************************************************************
** Form generated from reading UI file 'mapdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPDLG_H
#define UI_MAPDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapAreaDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout;
    QLabel *Label1;
    QSpinBox *MapSize1;
    QLabel *Label2;
    QSpinBox *MapSize2;
    QWidget *Panel2;
    QGridLayout *gridLayout;
    QLabel *Label5;
    QDoubleSpinBox *Lon;
    QDoubleSpinBox *Lat;
    QLabel *Label6;
    QCheckBox *ScaleEq;
    QDoubleSpinBox *ScaleX;
    QDoubleSpinBox *ScaleY;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnSave;
    QPushButton *BtnCenter;
    QPushButton *BtnUpdate;
    QPushButton *BtnClose;

    void setupUi(QWidget *MapAreaDialog)
    {
        if (MapAreaDialog->objectName().isEmpty())
            MapAreaDialog->setObjectName(QStringLiteral("MapAreaDialog"));
        MapAreaDialog->resize(489, 197);
        verticalLayout = new QVBoxLayout(MapAreaDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Panel1 = new QWidget(MapAreaDialog);
        Panel1->setObjectName(QStringLiteral("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(Panel1);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Label1 = new QLabel(Panel1);
        Label1->setObjectName(QStringLiteral("Label1"));
        Label1->setEnabled(true);

        horizontalLayout->addWidget(Label1);

        MapSize1 = new QSpinBox(Panel1);
        MapSize1->setObjectName(QStringLiteral("MapSize1"));

        horizontalLayout->addWidget(MapSize1);

        Label2 = new QLabel(Panel1);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Label2->sizePolicy().hasHeightForWidth());
        Label2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(Label2);

        MapSize2 = new QSpinBox(Panel1);
        MapSize2->setObjectName(QStringLiteral("MapSize2"));

        horizontalLayout->addWidget(MapSize2);


        verticalLayout->addWidget(Panel1);

        Panel2 = new QWidget(MapAreaDialog);
        Panel2->setObjectName(QStringLiteral("Panel2"));
        Panel2->setEnabled(true);
        gridLayout = new QGridLayout(Panel2);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Label5 = new QLabel(Panel2);
        Label5->setObjectName(QStringLiteral("Label5"));
        Label5->setEnabled(true);

        gridLayout->addWidget(Label5, 1, 0, 1, 2);

        Lon = new QDoubleSpinBox(Panel2);
        Lon->setObjectName(QStringLiteral("Lon"));
        Lon->setEnabled(true);
        Lon->setDecimals(9);
        Lon->setMinimum(-180);
        Lon->setMaximum(180);
        Lon->setSingleStep(1e-6);

        gridLayout->addWidget(Lon, 1, 2, 1, 1);

        Lat = new QDoubleSpinBox(Panel2);
        Lat->setObjectName(QStringLiteral("Lat"));
        Lat->setEnabled(true);
        Lat->setDecimals(9);
        Lat->setMinimum(-90);
        Lat->setMaximum(90);
        Lat->setSingleStep(1e-6);

        gridLayout->addWidget(Lat, 1, 3, 1, 1);

        Label6 = new QLabel(Panel2);
        Label6->setObjectName(QStringLiteral("Label6"));
        Label6->setEnabled(true);

        gridLayout->addWidget(Label6, 2, 0, 1, 1);

        ScaleEq = new QCheckBox(Panel2);
        ScaleEq->setObjectName(QStringLiteral("ScaleEq"));
        ScaleEq->setChecked(false);

        gridLayout->addWidget(ScaleEq, 2, 1, 1, 1);

        ScaleX = new QDoubleSpinBox(Panel2);
        ScaleX->setObjectName(QStringLiteral("ScaleX"));
        ScaleX->setEnabled(true);
        ScaleX->setDecimals(4);
        ScaleX->setMaximum(1);
        ScaleX->setSingleStep(0.0001);

        gridLayout->addWidget(ScaleX, 2, 2, 1, 1);

        ScaleY = new QDoubleSpinBox(Panel2);
        ScaleY->setObjectName(QStringLiteral("ScaleY"));
        ScaleY->setEnabled(true);
        ScaleY->setDecimals(4);
        ScaleY->setMaximum(8);
        ScaleY->setSingleStep(0.0001);

        gridLayout->addWidget(ScaleY, 2, 3, 1, 1);


        verticalLayout->addWidget(Panel2);

        widget = new QWidget(MapAreaDialog);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnSave = new QPushButton(widget);
        BtnSave->setObjectName(QStringLiteral("BtnSave"));
        BtnSave->setEnabled(true);

        horizontalLayout_2->addWidget(BtnSave);

        BtnCenter = new QPushButton(widget);
        BtnCenter->setObjectName(QStringLiteral("BtnCenter"));
        BtnCenter->setEnabled(true);

        horizontalLayout_2->addWidget(BtnCenter);

        BtnUpdate = new QPushButton(widget);
        BtnUpdate->setObjectName(QStringLiteral("BtnUpdate"));
        BtnUpdate->setEnabled(true);

        horizontalLayout_2->addWidget(BtnUpdate);

        BtnClose = new QPushButton(widget);
        BtnClose->setObjectName(QStringLiteral("BtnClose"));
        BtnClose->setEnabled(true);
        BtnClose->setAutoDefault(true);

        horizontalLayout_2->addWidget(BtnClose);


        verticalLayout->addWidget(widget);


        retranslateUi(MapAreaDialog);

        BtnClose->setDefault(true);


        QMetaObject::connectSlotsByName(MapAreaDialog);
    } // setupUi

    void retranslateUi(QWidget *MapAreaDialog)
    {
        MapAreaDialog->setWindowTitle(QApplication::translate("MapAreaDialog", "Map Image", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        MapAreaDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Label1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label1->setText(QApplication::translate("MapAreaDialog", "Image Size W/H (pixels)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Label2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label2->setText(QApplication::translate("MapAreaDialog", "x", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel2->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Label5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label5->setText(QApplication::translate("MapAreaDialog", "Image Center Lon/Lat (\302\260)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Lon->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Lat->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Label6->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Label6->setText(QApplication::translate("MapAreaDialog", "Scale X/Y (m/pixel)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ScaleEq->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        ScaleEq->setText(QApplication::translate("MapAreaDialog", "X=Y", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ScaleX->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ScaleY->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BtnSave->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnSave->setText(QApplication::translate("MapAreaDialog", "&Save Tag", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnCenter->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnCenter->setText(QApplication::translate("MapAreaDialog", "&Center", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnUpdate->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnUpdate->setText(QApplication::translate("MapAreaDialog", "&Update", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        BtnClose->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        BtnClose->setText(QApplication::translate("MapAreaDialog", "&Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MapAreaDialog: public Ui_MapAreaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPDLG_H
