/********************************************************************************
** Form generated from reading UI file 'editcur.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCUR_H
#define UI_EDITCUR_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditCur
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QPushButton *load;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *EditCur)
    {
        if (EditCur->objectName().isEmpty())
            EditCur->setObjectName(QStringLiteral("EditCur"));
        EditCur->resize(468, 441);
        QPalette palette;
        QBrush brush(QColor(240, 240, 240, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(54, 54, 54, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(81, 81, 81, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(67, 67, 67, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(27, 27, 27, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(36, 36, 36, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush7(QColor(64, 64, 64, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        EditCur->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        EditCur->setFont(font);
        EditCur->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pushButton = new QPushButton(EditCur);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 400, 121, 31));
        pushButton->setAutoDefault(false);
        pushButton_3 = new QPushButton(EditCur);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(340, 60, 121, 28));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/m6.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_3->setIcon(icon);
        pushButton_3->setAutoDefault(false);
        tableView = new QTableView(EditCur);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 60, 321, 371));
        pushButton_2 = new QPushButton(EditCur);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 20, 121, 28));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/m7.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_2->setIcon(icon1);
        pushButton_2->setAutoDefault(false);
        load = new QPushButton(EditCur);
        load->setObjectName(QStringLiteral("load"));
        load->setGeometry(QRect(380, 0, 1, 1));
        load->setAutoDefault(false);
        layoutWidget = new QWidget(EditCur);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 21, 321, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaxLength(10);

        horizontalLayout->addWidget(lineEdit);

        QWidget::setTabOrder(lineEdit, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, tableView);
        QWidget::setTabOrder(tableView, pushButton);
        QWidget::setTabOrder(pushButton, load);

        retranslateUi(EditCur);

        QMetaObject::connectSlotsByName(EditCur);
    } // setupUi

    void retranslateUi(QDialog *EditCur)
    {
        EditCur->setWindowTitle(QApplication::translate("EditCur", "Currency", nullptr));
        pushButton->setText(QApplication::translate("EditCur", "Close", nullptr));
        pushButton_3->setText(QApplication::translate("EditCur", "Delete", nullptr));
        pushButton_2->setText(QApplication::translate("EditCur", "Add", nullptr));
        load->setText(QApplication::translate("EditCur", "load", nullptr));
        label->setText(QApplication::translate("EditCur", "New currency", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditCur: public Ui_EditCur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCUR_H
