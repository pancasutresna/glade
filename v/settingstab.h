#ifndef SETTINGSTAB_H
#define SETTINGSTAB_H

#include <QWidget>

namespace Ui {
    class SettingsTab;
}

class SettingsTab : public QWidget
{
    Q_OBJECT

public:
    explicit SettingsTab(QWidget *parent = nullptr);
    ~SettingsTab();

private:
    Ui::SettingsTab *ui;
};

#endif // SETTINGSTAB_H
