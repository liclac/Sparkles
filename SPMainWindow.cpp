#include "SPMainWindow.h"
#include "ui_SPMainWindow.h"

SPMainWindow::SPMainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::SPMainWindow)
{
	ui->setupUi(this);
	
	ui->tabBar->setShape(QTabBar::RoundedSouth);
	ui->tabBar->setUsesScrollButtons(true);
	ui->tabBar->addTab("Tab 1");
	ui->tabBar->addTab("Tab 2");
}

SPMainWindow::~SPMainWindow()
{
	delete ui;
}
