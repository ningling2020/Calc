#include "Calc.h"

int main(int argc, char **argv){
	QApplication app(argc, argv);
	Calc calc;
	calc.show();
	return app.exec();
}
