#include "SPMainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SPMainWindow w;
	w.show();

	return a.exec();
}
