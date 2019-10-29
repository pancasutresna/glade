#ifndef APPLICATIONTAB_H
#define APPLICATIONTAB_H

#include <QWidget>

namespace Ui {
    class ApplicationTab;
}

class ApplicationTab : public QWidget
{
    Q_OBJECT

public:
    explicit ApplicationTab(QWidget *parent = nullptr);
    ~ApplicationTab();

private:
    Ui::ApplicationTab *ui;
};

#endif // APPLICATIONTAB_H
