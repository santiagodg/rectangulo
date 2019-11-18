#include <iostream>
using namespace std;

class Rectangulo
{
	private:
		// Atributos
		double dAltura;
		double dAncho;
		string sColor;

	public:
		// Constructores
		Rectangulo();
		Rectangulo(double, double, string);

		//Métodos
		double area();
		double perimetro();
		void toString();
		void dibujaRectangulo();

		// Acceso
		double getAncho();
		double getAltura();
		string getColor();

		// Modificación
		void setAncho(double);
		void setAltura(double);
		void setColor(string);
};

Rectangulo::Rectangulo()
{
	dAltura = 5;
	dAncho = 10;
	sColor = "azul";
}

Rectangulo::Rectangulo(double dAl, double dAn, string sColor)
{
	dAltura = dAl;
	dAncho = dAn;
	this -> sColor = sColor;
}

double Rectangulo::area()
{
	return dAncho * dAltura;
}

double Rectangulo::perimetro()
{
	return (2 * dAncho) + (2 * dAltura);
}

void Rectangulo::toString()
{
	cout << "dAltura = ";
	cout << dAltura << endl;
	cout << "dAncho = ";
	cout << dAncho << endl;
	cout << "sColor = ";
	cout << sColor << endl;
}

void Rectangulo::dibujaRectangulo()
{
	for (int iH = 0; iH < dAltura; iH++)
	{
		for (int iW = 0; iW < dAncho; iW++)
		{
			if (iH == 0 || iH == dAltura - 1)
			{
				cout << '*';
			}
			else if (iW == 0 || iW == dAncho - 1)
			{
				cout << '*';
			}
			else
			{
				cout << ' ';
			}
		}
		cout << endl;
	}
}

double Rectangulo::getAncho()
{
	return dAncho;
}

double Rectangulo::getAltura()
{
	return dAltura;
}

string Rectangulo::getColor()
{
	return sColor;
}

void Rectangulo::setAncho(double dAn)
{
	dAncho = dAn;
}

void Rectangulo::setAltura(double dAl)
{
	dAltura = dAl;
}

void Rectangulo::setColor(string sCo)
{
	sColor = sCo;
}