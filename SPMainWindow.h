#ifndef SPMAINWINDOW_H
#define SPMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class SPMainWindow;
}

class SPMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit SPMainWindow(QWidget *parent = 0);
	~SPMainWindow();

private:
	Ui::SPMainWindow *ui;
};

#endif // SPMAINWINDOW_H