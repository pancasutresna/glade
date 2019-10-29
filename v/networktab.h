#ifndef NETWORKTAB_H
#define NETWORKTAB_H

#include <QWidget>

namespace Ui {
    class NetworkTab;
}

namespace Ps {

    class NetworkScannerMainWindow;

    class NetworkTab : public QWidget
    {
        Q_OBJECT

    public:
        explicit NetworkTab(QWidget *parent = nullptr);
        ~NetworkTab();

    private slots:
        void on_btnNetworkScanner_clicked();

    private:
        Ui::NetworkTab *ui;
        NetworkScannerMainWindow& m_networkScannerMainWindow;
    };
}

#endif // NETWORKTAB_H
