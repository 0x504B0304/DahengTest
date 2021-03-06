#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include "Daheng_inc/DxImageProc.h"
#include "Daheng_inc/GxIAPI.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_OpenButton_clicked();

private:
    Ui::MainWindow *ui;
    GX_DEV_HANDLE hDevice = nullptr;
    static void GX_STDC OnFrameCallbackFun(GX_FRAME_CALLBACK_PARAM* pFrame);
};
#endif // MAINWINDOW_H
