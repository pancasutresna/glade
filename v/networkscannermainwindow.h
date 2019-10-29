#ifndef NETWORKSCANNERMAINWINDOW_H
#define NETWORKSCANNERMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class NetworkScannerMainWindow;
}

namespace Ps {
    class NetworkScannerMainWindow : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit NetworkScannerMainWindow(QWidget *parent = nullptr);
        ~NetworkScannerMainWindow();

    private:
        Ui::NetworkScannerMainWindow *ui;
    };
}



#endif // NETWORKSCANNERMAINWINDOW_H
