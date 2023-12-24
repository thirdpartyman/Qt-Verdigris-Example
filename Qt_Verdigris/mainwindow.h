#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <wobjectdefs.h>

#include <QMainWindow>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    W_OBJECT(MainWindow)

public:
    explicit MainWindow(QWidget *parent = nullptr);

private /* slots */:
    void handleButton();
    W_SLOT(handleButton)
private:
    QPushButton m_button{"My Button", this};
};

#endif // MAINWINDOW_H
