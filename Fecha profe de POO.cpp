// Fecha_.cpp :
#include <iostream>

using namespace std;


class Fecha {//Name's class
private:
	int dia;
	int mes;
	int anio;
public:
	Fecha(int _dia, int _mes, int _anio);
	void leer();
	void enero();
	void biciesto();
	void mesesMix();


};
//Constructor inicializado 
Fecha::Fecha(int _dia, int _mes, int _anio) {
	dia = _dia;
	mes = _mes;
	anio = _anio;
}
void Fecha::leer() {
	cout << "Digite la fecha " << endl;
	cout << "Digite el dia: ";
	cin >> dia;
	cout << "Digite el mes: ";
	cin >> mes;
	cout << "Digite el anio: ";
	cin >> anio;
	if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (anio >= 1)) {
		cout << "Fecha ingresada correctamente: " << endl;
	}
	else {
		cout << "Fecha ingresada incorrectamente " << dia << "/" << mes << "/" << anio << endl;
	}
}
void Fecha::enero() {
	if (dia >= 1 || dia <= 31) {
	}
	else {
		cout << "El numero del dia que dijitaste es invalido" << endl;
	}

}

void Fecha::biciesto() {

	if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0)
		cout << "\nEste anio es biciesto" << endl;

}
void Fecha::mesesMix() {

	switch (mes) {
	case 1:

		if (dia >= 1 && dia <= 31) {
			cout << anio << "/" << "Ene" << "/" << dia << endl;
		}
		break;
	case 2:
		if (dia >= 1 && dia <= 29) {
			cout << anio << "/" << "Feb" << "/" << dia << endl;
		
		}
		break;
	case 3:
		if (dia >= 1 && dia <= 31) {
			cout << anio << "/" << "Mar" << "/" << dia << endl;
		}
		break;
	case 4:
		if (dia >= 1 && dia <= 30) {
			cout << anio << "/" << "Abr" << "/" << dia << endl;
		}
		break;
	case 5:
		if (dia >= 1 && dia <= 31) {
			cout << anio << "/" << "May" << "/" << dia << endl;
		}
		break;
	case 6:
		if (dia >= 1 && dia <= 30)
			cout << anio << "/" << "Jun" << "/" << dia << endl;
		break;
	case 7:
		if (dia >= 1 && dia <= 31)
			cout << anio << "/" << "Jul" << "/" << dia << endl;
		break;
	case 8:
		if (dia >= 1 && dia <= 30)
			cout << anio << "/" << "Ago" << "/" << dia << endl;
		break;
	case 9:
		if (dia >= 1 && dia <= 31)
			cout << anio << "/" << "Sep" << "/" << dia << endl;
		break;
	case 10:
		if (dia >= 1 && dia <= 30)
			cout << anio << "/" << "Oct" << "/" << dia << endl;
		break;
	case 11:
		if (dia >= 1 && dia <= 31)
			cout << anio << "/" << "Nov" << "/" << dia << endl;
		break;
	case 12:
		if (dia >= 1 && dia <= 30)
			cout << anio << "/" << "Dic" << "/" << dia << endl;
		break;

	}
}

int main() {
	int dia = 0, mes = 0, anio = 0;
	Fecha press(dia, mes, anio);

	press.leer();
	press.enero();
	press.biciesto();
	press.mesesMix();
	return 0;
}