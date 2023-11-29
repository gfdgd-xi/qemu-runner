#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "command.h"
#include "qemu.h"
#include <iostream>
#include <QFile>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Get system architcture
    Command command;
    systemArch = command.GetCommand("arch").replace(" ", "").replace("\n", "");
    if(systemArch == "aarch64"){
        // arm64
        ui->legecyBoot->setDisabled(1);
        ui->uefiBoot->setDisabled(1);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::RunQemuEasy(){
    qemu vm("");  // Don't need use option "name"
    // Depend windows and Linux path tree different to check
    if(QFile::exists("/etc/os-release")){
        // Linux
        if(systemArch == "x86_64" && QFile::exists("/dev/kvm")){
            //system("qemu-system-x86_64 --enable-kvm");

            return;
        }
        if(systemArch == "aarch64" && QFile::exists("/dev/kvm")){
            system("qemu-system-aarch64 --enable-kvm -M virt -cpu host");
            return;
        }
        return;
    }
    // Windows
}

void MainWindow::on_runQemu_clicked()
{

    if(ui->advancedModeCheckbox->isChecked()){
        // Advanced Mode
        return;
    }
    // Easy mode
    RunQemuEasy();
}

