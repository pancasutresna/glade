#include "networkscannermainwindow.h"
#include "ui_networkscannermainwindow.h"

namespace Ps {
    NetworkScannerMainWindow::NetworkScannerMainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::NetworkScannerMainWindow)
    {
        ui->setupUi(this);
    }

    NetworkScannerMainWindow::~NetworkScannerMainWindow()
    {
        delete ui;
    }

}

