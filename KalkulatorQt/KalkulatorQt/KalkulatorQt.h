#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMessageBox>
#include "ui_KalkulatorQt.h"
#include <QSignalMapper>

class KalkulatorQt : public QMainWindow
{
	Q_OBJECT

public:
	KalkulatorQt(QWidget *parent = Q_NULLPTR);
	void reenterNum(char c);

private:
	Ui::KalkulatorQtClass ui;
	double a, b;
	char znak[3] = { '+', '-', '*' };

private slots:
	void getAndshowResult(char &f);
	bool getValues();
	void clearAllTextFields();
};

