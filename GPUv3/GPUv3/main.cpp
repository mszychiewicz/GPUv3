#include "GPUv3.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	//srand(time(NULL));
	QApplication program(argc, argv);
	GPUv3 w;
	w.show();
	return program.exec();
}
