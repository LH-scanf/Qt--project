/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButtonSearch;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *BtnSet;
    QPushButton *BtnCloth;
    QPushButton *BtnExit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QListWidget *listWidget_PalyHistory;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget_PlayList;
    QTextBrowser *textBrowser_LyricShow;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonFront;
    QPushButton *pushButtonPlay;
    QPushButton *pushButtonNext;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_StartedTime;
    QSlider *horizontalSlider;
    QLabel *label_TotalTime;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName("MainWidget");
        MainWidget->resize(699, 533);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWidget->sizePolicy().hasHeightForWidth());
        MainWidget->setSizePolicy(sizePolicy);
        MainWidget->setMinimumSize(QSize(50, 0));
        MainWidget->setStyleSheet(QString::fromUtf8("color:rgb(47, 47, 47)"));
        gridLayout_2 = new QGridLayout(MainWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(MainWidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        pushButtonSearch = new QPushButton(groupBox);
        pushButtonSearch->setObjectName("pushButtonSearch");
        pushButtonSearch->setMinimumSize(QSize(20, 0));

        horizontalLayout->addWidget(pushButtonSearch);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        BtnSet = new QPushButton(MainWidget);
        BtnSet->setObjectName("BtnSet");
        BtnSet->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BtnSet->sizePolicy().hasHeightForWidth());
        BtnSet->setSizePolicy(sizePolicy1);
        BtnSet->setMaximumSize(QSize(30, 30));
        BtnSet->setCursor(QCursor(Qt::PointingHandCursor));
        BtnSet->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/icon/Set.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnSet->setIcon(icon);
        BtnSet->setIconSize(QSize(30, 30));

        horizontalLayout_3->addWidget(BtnSet);

        BtnCloth = new QPushButton(MainWidget);
        BtnCloth->setObjectName("BtnCloth");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(BtnCloth->sizePolicy().hasHeightForWidth());
        BtnCloth->setSizePolicy(sizePolicy2);
        BtnCloth->setCursor(QCursor(Qt::PointingHandCursor));
        BtnCloth->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"    background-color:transparent;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    /*\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\345\217\263\347\247\273\345\212\2504\345\203\217\347\264\240*/  \n"
"    padding-left:4px;\n"
"    /*\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\344\270\213\347\247\273\345\212\2504\345\203\217\347\264\240*/  \n"
"    padding-top:4px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/icon/Cloth.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnCloth->setIcon(icon1);
        BtnCloth->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(BtnCloth);

        BtnExit = new QPushButton(MainWidget);
        BtnExit->setObjectName("BtnExit");
        sizePolicy2.setHeightForWidth(BtnExit->sizePolicy().hasHeightForWidth());
        BtnExit->setSizePolicy(sizePolicy2);
        BtnExit->setCursor(QCursor(Qt::PointingHandCursor));
        BtnExit->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"    background-color:transparent;\n"
"}\n"
"      \n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    /*\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\345\217\263\347\247\273\345\212\2504\345\203\217\347\264\240*/  \n"
"    padding-left:4px;\n"
"    /*\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\344\270\213\347\247\273\345\212\2504\345\203\217\347\264\240*/  \n"
"    padding-top:4px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/icon/Close.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnExit->setIcon(icon2);
        BtnExit->setIconSize(QSize(15, 15));

        horizontalLayout_3->addWidget(BtnExit);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(MainWidget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        listWidget_PalyHistory = new QListWidget(groupBox_2);
        listWidget_PalyHistory->setObjectName("listWidget_PalyHistory");
        listWidget_PalyHistory->setMinimumSize(QSize(100, 0));
        listWidget_PalyHistory->setStyleSheet(QString::fromUtf8("background-color:transparent;"));

        gridLayout->addWidget(listWidget_PalyHistory, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        listWidget_PlayList = new QListWidget(groupBox_2);
        listWidget_PlayList->setObjectName("listWidget_PlayList");
        listWidget_PlayList->setStyleSheet(QString::fromUtf8("background-color:transparent;"));

        gridLayout->addWidget(listWidget_PlayList, 1, 0, 1, 1);

        textBrowser_LyricShow = new QTextBrowser(groupBox_2);
        textBrowser_LyricShow->setObjectName("textBrowser_LyricShow");
        textBrowser_LyricShow->setStyleSheet(QString::fromUtf8("background-color:transparent;"));

        gridLayout->addWidget(textBrowser_LyricShow, 1, 1, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 3);
        gridLayout->setColumnStretch(2, 2);

        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(246, 21, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButtonFront = new QPushButton(MainWidget);
        pushButtonFront->setObjectName("pushButtonFront");
        sizePolicy2.setHeightForWidth(pushButtonFront->sizePolicy().hasHeightForWidth());
        pushButtonFront->setSizePolicy(sizePolicy2);
        pushButtonFront->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonFront->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"    background-color:transparent;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    /*\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\345\217\263\347\247\273\345\212\2504\345\203\217\347\264\240*/  \n"
"    padding-left:4px;\n"
"    /*\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\344\270\213\347\247\273\345\212\2504\345\203\217\347\264\240*/  \n"
"    padding-top:4px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/icon/Front.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonFront->setIcon(icon3);
        pushButtonFront->setIconSize(QSize(20, 20));

        horizontalLayout_4->addWidget(pushButtonFront);

        pushButtonPlay = new QPushButton(MainWidget);
        pushButtonPlay->setObjectName("pushButtonPlay");
        sizePolicy2.setHeightForWidth(pushButtonPlay->sizePolicy().hasHeightForWidth());
        pushButtonPlay->setSizePolicy(sizePolicy2);
        pushButtonPlay->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonPlay->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"    background-color:transparent;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    /*\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\345\217\263\347\247\273\345\212\2504\345\203\217\347\264\240*/  \n"
"    padding-left:4px;\n"
"    /*\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\344\270\213\347\247\273\345\212\2504\345\203\217\347\264\240*/  \n"
"    padding-top:4px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/icon/Play.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPlay->setIcon(icon4);
        pushButtonPlay->setIconSize(QSize(20, 20));

        horizontalLayout_4->addWidget(pushButtonPlay);

        pushButtonNext = new QPushButton(MainWidget);
        pushButtonNext->setObjectName("pushButtonNext");
        sizePolicy2.setHeightForWidth(pushButtonNext->sizePolicy().hasHeightForWidth());
        pushButtonNext->setSizePolicy(sizePolicy2);
        pushButtonNext->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonNext->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    /*\350\203\214\346\231\257\351\242\234\350\211\262*/  \n"
"    background-color:transparent;\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"    /*\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\345\217\263\347\247\273\345\212\2504\345\203\217\347\264\240*/  \n"
"    padding-left:4px;\n"
"    /*\346\214\211\344\270\213\346\227\266\345\255\227\345\220\221\344\270\213\347\247\273\345\212\2504\345\203\217\347\264\240*/  \n"
"    padding-top:4px;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/icon/Next.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNext->setIcon(icon5);
        pushButtonNext->setIconSize(QSize(20, 20));

        horizontalLayout_4->addWidget(pushButtonNext);

        horizontalSpacer_3 = new QSpacerItem(246, 21, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_4, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_StartedTime = new QLabel(MainWidget);
        label_StartedTime->setObjectName("label_StartedTime");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(40);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_StartedTime->sizePolicy().hasHeightForWidth());
        label_StartedTime->setSizePolicy(sizePolicy3);
        label_StartedTime->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(label_StartedTime);

        horizontalSlider = new QSlider(MainWidget);
        horizontalSlider->setObjectName("horizontalSlider");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(90);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy4);
        horizontalSlider->setMinimumSize(QSize(400, 0));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);

        label_TotalTime = new QLabel(MainWidget);
        label_TotalTime->setObjectName("label_TotalTime");
        label_TotalTime->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_TotalTime->sizePolicy().hasHeightForWidth());
        label_TotalTime->setSizePolicy(sizePolicy5);
        label_TotalTime->setMinimumSize(QSize(0, 0));
        label_TotalTime->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(label_TotalTime);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 8);
        horizontalLayout_2->setStretch(2, 1);

        gridLayout_2->addLayout(horizontalLayout_2, 3, 0, 1, 2);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
        groupBox->setTitle(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWidget", "\346\220\234\347\264\242\346\255\214\346\233\262", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("MainWidget", "\346\220\234\347\264\242", nullptr));
#if QT_CONFIG(tooltip)
        BtnSet->setToolTip(QCoreApplication::translate("MainWidget", "\350\256\276\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnSet->setText(QString());
#if QT_CONFIG(tooltip)
        BtnCloth->setToolTip(QCoreApplication::translate("MainWidget", "\346\233\264\346\215\242\344\270\273\351\242\230", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnCloth->setText(QString());
#if QT_CONFIG(tooltip)
        BtnExit->setToolTip(QCoreApplication::translate("MainWidget", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        BtnExit->setText(QString());
        groupBox_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("MainWidget", "\346\222\255\346\224\276\345\216\206\345\217\262", nullptr));
        label->setText(QCoreApplication::translate("MainWidget", "\346\222\255\346\224\276\345\210\227\350\241\250", nullptr));
        label_2->setText(QCoreApplication::translate("MainWidget", "\346\255\214\350\257\215", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonFront->setToolTip(QCoreApplication::translate("MainWidget", "\344\270\212\344\270\200\351\246\226", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonFront->setText(QString());
#if QT_CONFIG(tooltip)
        pushButtonPlay->setToolTip(QCoreApplication::translate("MainWidget", "\346\222\255\346\224\276/\346\232\202\345\201\234", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonPlay->setText(QString());
#if QT_CONFIG(tooltip)
        pushButtonNext->setToolTip(QCoreApplication::translate("MainWidget", "\344\270\213\344\270\200\351\246\226", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonNext->setText(QString());
        label_StartedTime->setText(QCoreApplication::translate("MainWidget", "00\357\274\23200", nullptr));
        label_TotalTime->setText(QCoreApplication::translate("MainWidget", "00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
