#include "networktab.h"
#include "ui_networktab.h"
#include "v/networkscannermainwindow.h"
#include "utils.h"

namespace Ps {
    NetworkTab::NetworkTab(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::NetworkTab),
        m_networkScannerMainWindow(*new NetworkScannerMainWindow())
    {
        ui->setupUi(this);
    }

    NetworkTab::~NetworkTab()
    {

        Utils::DestructorMsg(this);
        delete ui;
        delete &m_networkScannerMainWindow;
    }

    void NetworkTab::on_btnNetworkScanner_clicked()
    {
        m_networkScannerMainWindow.show();
    }
}



