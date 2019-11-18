#include <iostream>
#include "Rectangulo.h"
using namespace std;

int main()
{
	double dAl, dAn, dArea;
	string sColor;

	cout << "Ingrese la altura: ";
	cin >> dAl;
	cout << "Ingrese el ancho: ";
	cin >> dAn;
	cout << "Ingrese el color: ";
	cin >> sColor;

	// Rectangulo rectangulo1;
	Rectangulo rectangulo2(dAl, dAn, sColor);

	/*
	cout << "Area del rectangulo 1: ";
	cout << rectangulo1.area() << endl;

	dArea = rectangulo2.area();
	cout << "Area del rectangulo 2: ";
	cout << dArea << endl;

	rectangulo1.toString();
	rectangulo1.dibujaRectangulo();

	rectangulo2.toString();
	rectangulo2.dibujaRectangulo();
	*/

	rectangulo2.toString();

	cout << "Ingresa un ancho nuevo: ";
	cin >> dAn;
	rectangulo2.setAncho(dAn);
	cout << "Ingresa una altura nueva: ";
	cin >> dAl;
	rectangulo2.setAltura(dAl);
	cout << "Ingresa un color nuevo: ";
	cin >> sColor;
	rectangulo2.setColor(sColor);

	cout << "Ancho: " << rectangulo2.getAncho() << endl;
	cout << "Altura: " << rectangulo2.getAltura() << endl;
	cout << "Color: " << rectangulo2.getColor() << endl;

	return 0;
}
