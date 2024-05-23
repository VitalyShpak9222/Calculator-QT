#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Calculator_func.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(this->ui->buttom_num_0, SIGNAL(clicked()), this, SLOT(Press_num_0()));
    connect(this->ui->buttom_num_1, SIGNAL(clicked()), this, SLOT(Press_num_1()));
    connect(this->ui->buttom_num_2, SIGNAL(clicked()), this, SLOT(Press_num_2()));
    connect(this->ui->buttom_num_3, SIGNAL(clicked()), this, SLOT(Press_num_3()));
    connect(this->ui->buttom_num_4, SIGNAL(clicked()), this, SLOT(Press_num_4()));
    connect(this->ui->buttom_num_5, SIGNAL(clicked()), this, SLOT(Press_num_5()));
    connect(this->ui->buttom_num_6, SIGNAL(clicked()), this, SLOT(Press_num_6()));
    connect(this->ui->buttom_num_7, SIGNAL(clicked()), this, SLOT(Press_num_7()));
    connect(this->ui->buttom_num_8, SIGNAL(clicked()), this, SLOT(Press_num_8()));
    connect(this->ui->buttom_num_9, SIGNAL(clicked()), this, SLOT(Press_num_9()));
    connect(this->ui->buttom_operator_plus, SIGNAL(clicked()), this, SLOT(Press_plus()));
    connect(this->ui->buttom_operator_minus, SIGNAL(clicked()), this, SLOT(Press_minus()));
    connect(this->ui->button_operator_mult, SIGNAL(clicked()), this, SLOT(Press_mult()));
    connect(this->ui->button_operator_raz, SIGNAL(clicked()), this, SLOT(Press_raz()));
    connect(this->ui->buttom_operator_equals, SIGNAL(clicked()), this, SLOT(Press_equals()));
    connect(this->ui->buttom_operator_C, SIGNAL(clicked()), this, SLOT(Press_clear()));
    connect(this->ui->button_point, SIGNAL(clicked()), this, SLOT(Press_point()));
    connect(this->ui->button_left_bracket , SIGNAL(clicked()), this, SLOT(Press_bracket_left()));
    connect(this->ui->button_right_bracket , SIGNAL(clicked()), this, SLOT(Press_bracket_right()));
}

void MainWindow::Press_clear(){
    this->ui->textEdit->clear();
}

void MainWindow::Press_equals(){
    unsigned int i = 0;
    std::string task = this->ui->textEdit->toPlainText().toStdString();
    Calculator cal(task);
    double answer = cal.Expr(task, i);
    this->ui->textEdit->insertPlainText("=" + QString::number(answer));
    this->ui->textEdit->append("Для продолжения сотрите предыдущее выражение (клавиша С)");
}

void MainWindow::Press_plus(){
    QString str = this->ui->textEdit->toPlainText();
    int i = str.size();
    if(i == 0){}
    else if(str[i-1] != '+' && str[i-1] != '-' && str[i-1] != '*' && str[i-1] != '/'){
        this->ui->textEdit->insertPlainText("+");
    }

}

void MainWindow::Press_minus(){
    QString str = this->ui->textEdit->toPlainText();
    int i = str.size();
    if(i == 0){}
    else if(str[i-1] != '+' && str[i-1] != '-' && str[i-1] != '*' && str[i-1] != '/'){
        this->ui->textEdit->insertPlainText("-");
    }
}

void MainWindow::Press_mult(){
    QString str = this->ui->textEdit->toPlainText();
    int i = str.size();
    if(i == 0){}
    else if(str[i-1] != '+' && str[i-1] != '-' && str[i-1] != '*' && str[i-1] != '/'){
        this->ui->textEdit->insertPlainText("*");
    }
}

void MainWindow::Press_raz(){
    QString str = this->ui->textEdit->toPlainText();
    int i = str.size();
    if(i == 0){}
    else if(str[i-1] != '+' && str[i-1] != '-' && str[i-1] != '*' && str[i-1] != '/'){
        this->ui->textEdit->insertPlainText("/");
    }
}

void MainWindow::Press_bracket_left(){
    QString str = this->ui->textEdit->toPlainText();
    int i = str.size();
    if(i == 0){}
    this->ui->textEdit->insertPlainText("(");
}

void MainWindow::Press_bracket_right(){
    QString str = this->ui->textEdit->toPlainText();
    int i = str.size();
    if(i == 0){}
    this->ui->textEdit->insertPlainText(")");
}

void MainWindow::Press_point(){
    QString str = this->ui->textEdit->toPlainText();
    int i = str.size();
    if(i == 0){}
    else if(str[i-1] != '.' && str[i-1] != '(' && str[i-1] != ')'){
        this->ui->textEdit->insertPlainText(".");
    }
}

void MainWindow::Press_num_0(){
    this->ui->textEdit->insertPlainText("0");
}

void MainWindow::Press_num_1(){
    this->ui->textEdit->insertPlainText("1");
}

void MainWindow::Press_num_2(){
    this->ui->textEdit->insertPlainText("2");
}

void MainWindow::Press_num_3(){
    this->ui->textEdit->insertPlainText("3");
}

void MainWindow::Press_num_4(){
    this->ui->textEdit->insertPlainText("4");
}

void MainWindow::Press_num_5(){
    this->ui->textEdit->insertPlainText("5");
}


void MainWindow::Press_num_6(){
    this->ui->textEdit->insertPlainText("6");
}

void MainWindow::Press_num_7(){
    this->ui->textEdit->insertPlainText("7");
}

void MainWindow::Press_num_8(){
    this->ui->textEdit->insertPlainText("8");
}

void MainWindow::Press_num_9(){
    this->ui->textEdit->insertPlainText("9");
}

MainWindow::~MainWindow()
{
    delete ui;
}
