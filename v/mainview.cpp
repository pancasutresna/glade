#include "mainview.h"
#include "ui_mainview.h"
#include "v/networktab.h"

namespace Ps {
    MainView::MainView(QWidget *parent, NetworkTab& networkTab)
        : QMainWindow(parent),
          m_networkTab(networkTab),
          ui(new Ui::MainView)
    {
        ui->setupUi(this);
        m_networkTab.setParent(this);
        ui->loNetworkTab->addWidget(&m_networkTab);

    }

    MainView::~MainView()
    {
        delete ui;
    }
}
