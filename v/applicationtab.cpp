#include "applicationtab.h"
#include "ui_applicationtab.h"

ApplicationTab::ApplicationTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApplicationTab)
{
    ui->setupUi(this);
}

ApplicationTab::~ApplicationTab()
{
    delete ui;
}
