#include "SPMainWindow.h"
#include "ui_SPMainWindow.h"
#include <QtWinExtras>
#include <QDebug>

SPMainWindow::SPMainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::SPMainWindow)
{
	ui->setupUi(this);
	
	ui->tabBar->setShape(QTabBar::RoundedSouth);
	ui->tabBar->setUsesScrollButtons(true);
	ui->tabBar->addTab("Tab 1");
	ui->tabBar->addTab("Tab 2");
	
	QTimer::singleShot(0, this, SLOT(postConstructorSetup()));
}

SPMainWindow::~SPMainWindow()
{
	delete ui;
}

void SPMainWindow::postConstructorSetup()
{
#ifdef Q_OS_WIN32
	QtWin::enableBlurBehindWindow(this);
	QtWin::extendFrameIntoClientArea(this, -1, -1, -1, -1);
	this->setAttribute(Qt::WA_NoSystemBackground);
#endif
}

void SPMainWindow::on_tabBar_currentChanged(int index)
{
	qDebug() << "New Tab:" << index;
}
