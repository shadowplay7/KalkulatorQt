#include "KalkulatorQt.h"
#include "Kalkulator.h"

KalkulatorQt::KalkulatorQt(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.sumButton, &QPushButton::clicked, [this]() { this->getAndshowResult(this->znak[0]); });
	connect(ui.subButton, &QPushButton::clicked, [this]() { this->getAndshowResult(this->znak[1]); });
	connect(ui.multiButton, &QPushButton::clicked, [this]() { this->getAndshowResult(this->znak[2]); });
	connect(ui.clearButton, SIGNAL(clicked(bool)), this, SLOT(clearAllTextFields()));
}

bool KalkulatorQt::getValues() {
	bool valid;
	a = ui.lineEdit->text().toDouble(&valid);

	if (!valid) {
		reenterNum('A');
		return false;
	}
	else {
		b = ui.lineEdit_2->text().toDouble(&valid);
		if (!valid) {
			reenterNum('B');
			return false;
		}
	}
}


void KalkulatorQt::getAndshowResult(char &f) {
	if (!getValues())
	{
		clearAllTextFields();
	}
	else {
		Kalkulator nowy(a, b);
		ui.wyswietlEdit->setText(QString::number(nowy.doCalc(f)));
	}
}

void KalkulatorQt::clearAllTextFields() {
	ui.lineEdit->clear();
	ui.lineEdit_2->clear();
	ui.wyswietlEdit->clear();
}


void KalkulatorQt::reenterNum(char c) {
	QMessageBox Msgbox;
	switch (c)
	{
	case 'A':
		Msgbox.setText("Podaj jeszcze raz liczbe A!");
		break;
	case 'B':
		Msgbox.setText("Podaj jeszcze raz liczbe B!");
		break;
	}
	Msgbox.exec();
}

