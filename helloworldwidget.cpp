#include "helloworldwidget.h"
#include "ui_helloworldwidget.h"
#include <QFileDialog>
#include <QColorDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QMessageBox>

#include <QDebug>

HelloWorldWidget::HelloWorldWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelloWorldWidget)
{
    ui->setupUi(this);

    connect(ui->BtnShowHello,SIGNAL(clicked(bool)),this,SLOT(OnClickShowHelloWorld()));
    connect(this,SIGNAL(SendSignal(int)),this,SLOT(OnShowLog(int)));
}

HelloWorldWidget::~HelloWorldWidget()
{
    delete ui;
}

void HelloWorldWidget::OnClickShowHelloWorld()
{
    ui->editShowHello->setText("Hello World !");

    qDebug()<<"call OnClickShowHelloWorld()"<<endl;

    emit SendSignal(100);
}

void HelloWorldWidget::OnShowLog(int a)
{
    qDebug()<<"call OnShowLog() a="<<a<<endl;
    ui->LabelShowMsg->setText("Hello World !");

    //QFileDialog fileDlg;
    //fileDlg.exec();
    //fileDlg.setModal(true);
    //fileDlg.show();

    //QColorDialog colorDlg;
    //colorDlg.exec();

    //QFontDialog fontDlg;
    //fontDlg.exec();

    //QInputDialog inputDlg;
    //inputDlg.exec();

    QMessageBox msgDlg;
    msgDlg.exec();
}
