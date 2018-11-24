#include "firstwindow.h"
#include "ui_firstwindow.h"
#include <iostream>

FirstWindow::FirstWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstWindow)
{
    ui->setupUi(this);
    connect(ui->actQuit, &QAction::triggered, []{
        exit(0);
    });

    connect(ui->btnSendToLog, &QPushButton::clicked, [this]{
        if (ui->lineSendToLog->text().length() != 0)
        {
            ui->txtArea->append(ui->lineSendToLog->text());
            ui->lineSendToLog->setText("");
        }
    });
}

FirstWindow::~FirstWindow()
{
    delete ui;
}
