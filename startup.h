#pragma once
#include <QObject>

namespace Ps{

    class MainView;
    class NetworkTab;

    class Startup : public QObject
    {
        Q_OBJECT
    public:
        explicit Startup();
        ~Startup();

        void Show() const;

    private:
        NetworkTab& m_networkTab;
        MainView& m_mainView;

        explicit Startup(const Startup& rhs) = delete;
        Startup& operator= (const Startup& rhs) = delete;
    };
}


