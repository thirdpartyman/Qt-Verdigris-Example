#include "mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
{
    setMinimumWidth(400);
    setMinimumHeight(250);

    m_button.setGeometry(QRect(QPoint(100, 100), QSize(200, 50)));

    connect(&m_button, &QPushButton::released, this, &MainWindow::handleButton);
}

void MainWindow::handleButton()
{
    QMessageBox::about(this, "Message", "Click");
}
