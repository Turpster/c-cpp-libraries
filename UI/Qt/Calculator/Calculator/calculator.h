#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;

    void event_click_one();
    void event_click_two();
    void event_click_three();
    void event_click_four();
    void event_click_five();
    void event_click_six();
    void event_click_seven();
    void event_click_eight();
    void event_click_nine();
    void event_click_zero();

    void event_click_div();
    void event_click_bsp();
    void event_click_equ();
    void event_click_mul();

    void setup_function_binds();
};

#endif // CALCULATOR_H
