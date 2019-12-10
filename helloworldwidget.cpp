#include "helloworldwidget.h"
#include "ui_helloworldwidget.h"
#include <QFileDialog>
#include <QColorDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QDebug>
#include <QLinkedList>

HelloWorldWidget::HelloWorldWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelloWorldWidget)
{
    ui->setupUi(this);

    //connect(ui->BtnShowHello,SIGNAL(clicked(bool)),this,SLOT(on_BtnShowHello_clicked()));
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

    //QMessageBox msgDlg;
    //msgDlg.exec();
}

void HelloWorldWidget::on_BtnShowHello_clicked(bool checked)
{
    ui->editShowHello->setText("Hello World !");

    qDebug()<<"call on_BtnShowHello_clicked()"<<checked;

    //emit SendSignal(100);
/*
    QString str;
    //str=QString("%1 的体重为 %2 kg").arg("小明").arg(7555.2259999999,0,'G',8);
    str.sprintf("%s 的体重为 %0.4f kg","小明",7555.2259999999);
    qDebug()<<str;

    str = "Welcome \t to \n you!  \n\n";
    qDebug()<<str;
    //str=str.trimmed();
    str=str.simplified();
    qDebug()<<str;

    str.insert(str.size()-1,"dddd");
    qDebug()<<str;

    str.prepend("aaaa");
    qDebug()<<str;

    str.replace("you","me");
    qDebug()<<str;

    qDebug()<<str.startsWith("aAaa",Qt::CaseSensitive);//字符大小写敏感
    qDebug()<<str.startsWith("aAaa",Qt::CaseInsensitive);//字符大小写不敏感

    qDebug()<<str.endsWith("ddDd!",Qt::CaseSensitive);//字符大小写敏感
    qDebug()<<str.endsWith("ddDd!",Qt::CaseInsensitive);//字符大小写不敏感

    QString str1="abc",str2="abd";
    qDebug()<<QString::localeAwareCompare(str1,str2);
    qDebug()<<QString::compare(str1,str2);

    QString str3="123",str4="123.55";
    qDebug()<<str3.toInt(nullptr,10);
    qDebug()<<str3.toInt(nullptr,16);
    qDebug()<<str3.toLong(nullptr,10);
    qDebug()<<str3.toLong(nullptr,16);
    qDebug()<<str3.toLongLong(nullptr,10);
    qDebug()<<str3.toLongLong(nullptr,16);
    qDebug()<<str4.toDouble();
    qDebug()<<str4.toFloat();

    QByteArray ba;
    ba.resize(6);
    ba[0] = 0x3c;
    ba[1] = 0xb8;
    ba[2] = 0x64;
    ba[3] = 0x18;
    ba[4] = 0xca;
    ba.data()[5] = 0x31;
    qDebug()<<"[]"<<ba[2]; //[] d
    qDebug()<<"at()"<<ba.at(2); //at() d
    qDebug()<<"data()"<<ba.data()[2]; //data() d
    qDebug()<<"constData()"<<ba.constData()[2]; //constData() d
    qDebug()<<"constData()"<<ba.constData()[5]; //constData() 1

    QByteArray text = QByteArray::fromHex("517420697320677265617421");
    qDebug()<<text.data();            // returns "Qt is great!"

    QByteArray ba;
    ba.resize(3);
    ba[0] = 0x30;
    ba[1] = 0x31;
    ba[2] = 0x32;
    qDebug()<<ba.toHex(); //return "303132"

    //QByteArray转为QString示例：
    QByteArray ba("abc123");
    QString str = ba;
    //或str.prepend(ba);
    qDebug()<<str ;
    //输出："abc123"

    //QString转为QByteArray示例：
    QString str("abc123");
    ba = str.toLatin1();
    qDebug()<<ba;
    //输出："abc123"

    qDebug()<<QString().isNull();
    qDebug()<<QString().isEmpty();
    qDebug()<<QString("").isNull();
    qDebug()<<QString("").isEmpty();

    QList<QString> list;
    list<<"fffsfa";
    list<<"sdfassfd";
    qDebug()<<list[0];

    QLinkedList<QString> list2;
    list2<<"aaa";
    list2<<"bbb";
    list2<<"ccc";
    list2<<"ddd";
    list2<<"eee";

    QLinkedList<QString>::iterator iter = list2.begin();
    for(;iter!=list2.end();iter++)
    {
        qDebug()<<*iter;
    }

    QVector<QString> vec;
    vec<<"qqq";
    qDebug()<<vec[0];

    QMap<int,int> map;
    map.insert(1,1);
    map.insert(2,2);
    qDebug()<<map.size();

    QHash<int,int> hash;
    hash.insert(1,1);
    hash.insert(2,2);
    qDebug()<<hash.size();
*/

    QVariant qy;
}

void HelloWorldWidget::on_editShowHello_textChanged()
{
    //qDebug()<<"call on_editShowHello_textChanged()";
    qDebug()<<"edit content:"<<ui->editShowHello->toPlainText();
}
