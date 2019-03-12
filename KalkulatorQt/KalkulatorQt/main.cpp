#include "KalkulatorQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	KalkulatorQt w;
	w.show();
	return a.exec();
}
