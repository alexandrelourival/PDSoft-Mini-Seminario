/********************************************************************************
** Form generated from reading UI file 'fig.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIG_H
#define UI_FIG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fig
{
public:
    QAction *actionAjuda;
    QAction *actionSair;
    QWidget *centralWidget;
    QLabel *img;
    QPushButton *Desenhar;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *fig)
    {
        if (fig->objectName().isEmpty())
            fig->setObjectName(QString::fromUtf8("fig"));
        fig->resize(1280, 720);
        fig->setMinimumSize(QSize(1280, 720));
        fig->setMaximumSize(QSize(1280, 720));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        fig->setWindowIcon(icon);
        fig->setWindowOpacity(40.000000000000000);
        fig->setAutoFillBackground(false);
        actionAjuda = new QAction(fig);
        actionAjuda->setObjectName(QString::fromUtf8("actionAjuda"));
        actionSair = new QAction(fig);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        centralWidget = new QWidget(fig);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        img = new QLabel(centralWidget);
        img->setObjectName(QString::fromUtf8("img"));
        img->setGeometry(QRect(20, 20, 1151, 621));
        img->setMaximumSize(QSize(16777214, 16777215));
        img->setFrameShape(QFrame::Box);
        Desenhar = new QPushButton(centralWidget);
        Desenhar->setObjectName(QString::fromUtf8("Desenhar"));
        Desenhar->setGeometry(QRect(1180, 620, 89, 25));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(1180, 20, 86, 25));
        fig->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(fig);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1280, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        fig->setMenuBar(menuBar);
        mainToolBar = new QToolBar(fig);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        fig->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(fig);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        fig->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionAjuda);
        menuMenu->addAction(actionSair);

        retranslateUi(fig);

        QMetaObject::connectSlotsByName(fig);
    } // setupUi

    void retranslateUi(QMainWindow *fig)
    {
        fig->setWindowTitle(QApplication::translate("fig", "Figuras Geom\303\251tricas", nullptr));
        actionAjuda->setText(QApplication::translate("fig", "Ajuda", nullptr));
        actionSair->setText(QApplication::translate("fig", "Sair", nullptr));
        img->setText(QString());
        Desenhar->setText(QApplication::translate("fig", "DESENHAR", nullptr));
        menuMenu->setTitle(QApplication::translate("fig", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fig: public Ui_fig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIG_H
