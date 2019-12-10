#ifndef HELLOWORLDWIDGET_H
#define HELLOWORLDWIDGET_H

#include <QWidget>

namespace Ui {
class HelloWorldWidget;
}

class HelloWorldWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit HelloWorldWidget(QWidget *parent = 0);
    ~HelloWorldWidget();

signals:
    void SendSignal(int a);
    
public slots:
    void OnClickShowHelloWorld();
    void OnShowLog(int a);

private slots:
    void on_BtnShowHello_clicked(bool checked);

    void on_editShowHello_textChanged();

private:
    Ui::HelloWorldWidget *ui;
};

#endif // HELLOWORLDWIDGET_H
