#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_runQemu_clicked();

    void on_enableAdvancedOption_clicked(bool checked);

    void on_advancedModeCheckbox_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
    QString systemArch;
    void RunQemuEasy();
};
#endif // MAINWINDOW_H
