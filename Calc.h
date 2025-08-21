#include <QApplication>
#include <QPushButton>
#include <QLineEdit>
#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QDebug>
#include <QDoubleValidator>

class Calc : public QDialog{
	Q_OBJECT
private:
	QHBoxLayout *layout;
	QLineEdit *lineEdit1;
	QLineEdit *lineEdit2;
	QLineEdit *lineEdit3;
	QLabel *label;
	QPushButton *button;
public:
	Calc();
public slots:
	void check();
	void calc();
};
