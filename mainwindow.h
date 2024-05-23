#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void Press_num_0();
    void Press_num_1();
    void Press_num_2();
    void Press_num_3();
    void Press_num_4();
    void Press_num_5();
    void Press_num_6();
    void Press_num_7();
    void Press_num_8();
    void Press_num_9();
    void Press_plus();
    void Press_minus();
    void Press_mult();
    void Press_raz();
    void Press_point();
    void Press_equals();
    void Press_clear();
    void Press_bracket_left();
    void Press_bracket_right();

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
