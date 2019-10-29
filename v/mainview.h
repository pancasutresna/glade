#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainView; }
QT_END_NAMESPACE

namespace Ps {

    class NetworkTab;

    class MainView : public QMainWindow
    {
        Q_OBJECT

    public:
        MainView(QWidget *parent, NetworkTab &networkTab);
        ~MainView();

    private:
        NetworkTab& m_networkTab;

        Ui::MainView *ui;
    };
}

#endif // MAINVIEW_H
