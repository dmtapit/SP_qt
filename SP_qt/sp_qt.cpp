#include "sp_qt.h"
#include "ui_sp_qt.h"

SP_qt::SP_qt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SP_qt)
{
    ui->setupUi(this);
}

SP_qt::~SP_qt()
{
    delete ui;
}
