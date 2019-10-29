#include <QApplication>
#include <QObject>

#include "v/mainview.h"
#include "startup.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ps::Startup startup;

    startup.Show();
    return a.exec();
}
