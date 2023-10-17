#include "doctermainwindow.h"
#include "ui_doctermainwindow.h"

DocterMainWindow::DocterMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DocterMainWindow)
{
    ui->setupUi(this);
}

DocterMainWindow::~DocterMainWindow()
{
    delete ui;
}
