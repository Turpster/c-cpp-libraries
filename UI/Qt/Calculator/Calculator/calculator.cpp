#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
    this->setup_function_binds();
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::setup_function_binds()
{
    connect(ui->btnBackspace, &QPushButton::clicked, [this]{this->event_click_bsp();});
    connect(ui->btnMultiply, &QPushButton::clicked, [this]{this->event_click_mul();});
    connect(ui->btnDivide, &QPushButton::clicked, [this]{this->event_click_div();});
    connect(ui->btnEquals, &QPushButton::clicked, [this]{this->event_click_equ();});

    connect(ui->btnOne, &QPushButton::clicked, [this]{this->event_click_one();});
    connect(ui->btnTwo, &QPushButton::clicked, [this]{this->event_click_two();});
    connect(ui->btnThree, &QPushButton::clicked, [this]{this->event_click_three();});
    connect(ui->btnFour, &QPushButton::clicked, [this]{this->event_click_four();});
    connect(ui->btnFive, &QPushButton::clicked, [this]{this->event_click_five();});
    connect(ui->btnSix, &QPushButton::clicked, [this]{this->event_click_six();});
    connect(ui->btnSeven, &QPushButton::clicked, [this]{this->event_click_seven();});
    connect(ui->btnEight, &QPushButton::clicked, [this]{this->event_click_eight();});
    connect(ui->btnNine, &QPushButton::clicked, [this]{this->event_click_nine();});
    connect(ui->btnZero, &QPushButton::clicked, [this]{this->event_click_nine();});
}

// Button Events

// Operations
void Calculator::event_click_bsp()
{
    ui->linCalc->text().chop(1);
}

void Calculator::event_click_mul()
{
    ui->linCalc->setText(ui->linCalc->text().append('*'));
}

void Calculator::event_click_div()
{
    ui->linCalc->setText(ui->linCalc->text().append('/'));

}

void Calculator::event_click_equ()
{
    ui->linCalc->setText(ui->linCalc->text().append('='));
    // Calculate
}

// Numbers
void Calculator::event_click_one()
{
    ui->linCalc->setText(ui->linCalc->text().append('1'));
}

void Calculator::event_click_two()
{
    ui->linCalc->setText(ui->linCalc->text().append('2'));

}

void Calculator::event_click_three()
{
    ui->linCalc->setText(ui->linCalc->text().append('3'));

}

void Calculator::event_click_four()
{
    ui->linCalc->setText(ui->linCalc->text().append('4'));

}

void Calculator::event_click_five()
{
    ui->linCalc->setText(ui->linCalc->text().append('5'));

}

void Calculator::event_click_six()
{
    ui->linCalc->setText(ui->linCalc->text().append('6'));

}

void Calculator::event_click_seven()
{
    ui->linCalc->setText(ui->linCalc->text().append("7"));

}

void Calculator::event_click_eight()
{
    ui->linCalc->setText(ui->linCalc->text().append('8'));
}

void Calculator::event_click_nine()
{
    ui->linCalc->setText(ui->linCalc->text().append('9'));
}

void Calculator::event_click_zero()
{
    ui->linCalc->setText(ui->linCalc->text().append('0'));

}

