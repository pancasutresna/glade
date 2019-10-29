#include "startup.h"
#include "v/mainview.h"
#include "v/networkscannermainwindow.h"
#include "v/networktab.h"
#include "utils.h"

namespace Ps
{
    Startup::Startup() :
        QObject(nullptr),
        m_networkTab(*new NetworkTab(nullptr)),
        m_mainView(*new MainView(nullptr, m_networkTab))
    {

    }

    void Startup::Show() const {
        m_mainView.show();
    }

    Startup::~Startup(){
        Utils::DestructorMsg(this);
        delete &m_mainView;
    }
}
