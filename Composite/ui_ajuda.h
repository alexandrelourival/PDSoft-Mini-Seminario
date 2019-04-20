/********************************************************************************
** Form generated from reading UI file 'ajuda.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJUDA_H
#define UI_AJUDA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ajuda
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ajuda)
    {
        if (ajuda->objectName().isEmpty())
            ajuda->setObjectName(QString::fromUtf8("ajuda"));
        ajuda->resize(460, 440);
        ajuda->setMinimumSize(QSize(460, 440));
        ajuda->setMaximumSize(QSize(460, 440));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Ajuda.png"), QSize(), QIcon::Normal, QIcon::Off);
        ajuda->setWindowIcon(icon);
        ajuda->setWindowOpacity(40.000000000000000);
        verticalLayout = new QVBoxLayout(ajuda);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(ajuda);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(textBrowser);

        buttonBox = new QDialogButtonBox(ajuda);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ajuda);
        QObject::connect(buttonBox, SIGNAL(accepted()), ajuda, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ajuda, SLOT(reject()));

        QMetaObject::connectSlotsByName(ajuda);
    } // setupUi

    void retranslateUi(QDialog *ajuda)
    {
        ajuda->setWindowTitle(QApplication::translate("ajuda", "Ajuda", nullptr));
        textBrowser->setHtml(QApplication::translate("ajuda", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">DESENHO GEOMETRICO</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Este aplicativo \303\251 um programa did\303\241tico, para aprendizado de padr\303\265es de projetos.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></"
                        "p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Padr\303\265es de projetos:</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">1. Abstract Factory</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">2. Builder</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">3. Prototype</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">4. Bridge</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -q"
                        "t-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">5. Composite</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">5. Decorator</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">6. Command</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">7. Iterator</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">8. Observer</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">9. Strategy<br /></span></p>\n"
"<p align=\"c"
                        "enter\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Neste sofware usamos o padr\303\243o Composite.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ajuda: public Ui_ajuda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJUDA_H
