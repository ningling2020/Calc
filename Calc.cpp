#include "Calc.h"

Calc::Calc(){
	layout = new QHBoxLayout(this);
	lineEdit1 = new QLineEdit(this);
	lineEdit1->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
	lineEdit1->setValidator(new QDoubleValidator(this));
	lineEdit2 = new QLineEdit(this);
	lineEdit2->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
	lineEdit2->setValidator(new QDoubleValidator(this));
	lineEdit3 = new QLineEdit(this);
	lineEdit3->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
	label = new QLabel("+", this);
	button = new QPushButton("=", this);
	button->setEnabled(false);
	layout->addWidget(lineEdit1);	
	layout->addWidget(label);
	layout->addWidget(lineEdit2);	
	layout->addWidget(button);
	layout->addWidget(lineEdit3);	
	this->setLayout(layout);
	connect(button, SIGNAL(clicked()), this, SLOT(calc()));
	connect(lineEdit1, SIGNAL(textChanged(QString)), this, SLOT(check()));
	connect(lineEdit2, SIGNAL(textChanged(QString)), this, SLOT(check()));
}

void Calc::check(){
	QString str1 = lineEdit1->text();
	QString str2 = lineEdit2->text();
	bool flag1, flag2;
	str1.toDouble(&flag1);
	str2.toDouble(&flag2);
	if(flag1 && flag2){
		button->setEnabled(true);
	}else{
		button->setEnabled(false);
	}
}

void Calc::calc(){
	QString value1 = lineEdit1->text();
	QString value2 = lineEdit2->text();
	double d1 = value1.toDouble(NULL);
	double d2 = value2.toDouble(NULL);
	qDebug("%f", d1);
	QString value = QString::number(d1 + d2);
	lineEdit3->setText(value);
}
