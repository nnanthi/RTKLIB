/********************************************************************************
** Form generated from reading UI file 'fileseldlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESELDLG_H
#define UI_FILESELDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileSelDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *Panel1;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *DriveSel;
    QWidget *Panel2;
    QVBoxLayout *verticalLayout_2;
    QWidget *Panel5;
    QHBoxLayout *horizontalLayout;
    QLabel *DirSelected;
    QToolButton *BtnDirSel;
    QListView *FileList;
    QWidget *Panel3;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *Filter;

    void setupUi(QWidget *FileSelDialog)
    {
        if (FileSelDialog->objectName().isEmpty())
            FileSelDialog->setObjectName(QStringLiteral("FileSelDialog"));
        FileSelDialog->resize(257, 513);
        verticalLayout = new QVBoxLayout(FileSelDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Panel1 = new QWidget(FileSelDialog);
        Panel1->setObjectName(QStringLiteral("Panel1"));
        Panel1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Panel1->sizePolicy().hasHeightForWidth());
        Panel1->setSizePolicy(sizePolicy);
        Panel1->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_5 = new QHBoxLayout(Panel1);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        DriveSel = new QComboBox(Panel1);
        DriveSel->setObjectName(QStringLiteral("DriveSel"));

        horizontalLayout_5->addWidget(DriveSel);


        verticalLayout->addWidget(Panel1);

        Panel2 = new QWidget(FileSelDialog);
        Panel2->setObjectName(QStringLiteral("Panel2"));
        Panel2->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel2->sizePolicy().hasHeightForWidth());
        Panel2->setSizePolicy(sizePolicy);
        Panel2->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_2 = new QVBoxLayout(Panel2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, -1);
        Panel5 = new QWidget(Panel2);
        Panel5->setObjectName(QStringLiteral("Panel5"));
        Panel5->setEnabled(true);
        Panel5->setLayoutDirection(Qt::LeftToRight);
        Panel5->setProperty("editable", QVariant(true));
        horizontalLayout = new QHBoxLayout(Panel5);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        DirSelected = new QLabel(Panel5);
        DirSelected->setObjectName(QStringLiteral("DirSelected"));

        horizontalLayout->addWidget(DirSelected);

        BtnDirSel = new QToolButton(Panel5);
        BtnDirSel->setObjectName(QStringLiteral("BtnDirSel"));

        horizontalLayout->addWidget(BtnDirSel);


        verticalLayout_2->addWidget(Panel5);


        verticalLayout->addWidget(Panel2);

        FileList = new QListView(FileSelDialog);
        FileList->setObjectName(QStringLiteral("FileList"));
        FileList->setFrameShape(QFrame::StyledPanel);

        verticalLayout->addWidget(FileList);

        Panel3 = new QWidget(FileSelDialog);
        Panel3->setObjectName(QStringLiteral("Panel3"));
        Panel3->setEnabled(true);
        sizePolicy.setHeightForWidth(Panel3->sizePolicy().hasHeightForWidth());
        Panel3->setSizePolicy(sizePolicy);
        Panel3->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout_2 = new QHBoxLayout(Panel3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        Filter = new QComboBox(Panel3);
        Filter->setObjectName(QStringLiteral("Filter"));

        horizontalLayout_2->addWidget(Filter);


        verticalLayout->addWidget(Panel3);

        QWidget::setTabOrder(DriveSel, BtnDirSel);
        QWidget::setTabOrder(BtnDirSel, FileList);
        QWidget::setTabOrder(FileList, Filter);

        retranslateUi(FileSelDialog);

        QMetaObject::connectSlotsByName(FileSelDialog);
    } // setupUi

    void retranslateUi(QWidget *FileSelDialog)
    {
        FileSelDialog->setWindowTitle(QApplication::translate("FileSelDialog", "Solutions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        FileSelDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        Panel1->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel1->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Panel2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel2->setProperty("text", QVariant(QString()));
#ifndef QT_NO_TOOLTIP
        Panel5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel5->setProperty("text", QVariant(QString()));
        DirSelected->setText(QApplication::translate("FileSelDialog", "TextLabel", Q_NULLPTR));
        BtnDirSel->setText(QApplication::translate("FileSelDialog", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        Panel3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        Panel3->setProperty("text", QVariant(QApplication::translate("FileSelDialog", "Panel3", Q_NULLPTR)));
        Filter->clear();
        Filter->insertItems(0, QStringList()
         << QApplication::translate("FileSelDialog", "Position File (*.pos *.nmea)", Q_NULLPTR)
         << QApplication::translate("FileSelDialog", "All (*.*)", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class FileSelDialog: public Ui_FileSelDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESELDLG_H
