#include<iostream>

using namespace std;

class Wektor {
private:
	double x, y, z;

public:
	Wektor() : x(0.0), y(0.0), z(0.0) {}

	Wektor(double v) : x(v), y(v), z(v) {}

	Wektor(double x, double y, double z): x(x), y(y), z(z) {}

	bool operator== (const Wektor& v)
	{
		return (this->x == v.x && this->y == v.y && this->z == v.z);
	}

	bool operator!= (const Wektor& v)
	{
		return (this->x != v.x || this->y != v.y || this->z != v.z);
	}

	double getx()
	{
		return this->x;
	}

	double gety()
	{
		return this->y;
	}

	double getz()
	{
		return this->y;
	}
};

void displayMenu()
{
	cout << "Wybierz operacje na wektorach" << endl;
	cout << "1. Porownaj wektory" << endl;
	cout << "0. Zakoñcz" << endl;
}

int main()
{
	while (1)
	{
		displayMenu();
		int menuSelector;
		cin >> menuSelector;
		double firstVectorX;
		double firstVectorY;
		double firstVectorZ;
		double secondVectorX;
		double secondVectorY;
		double secondVectorZ;
		if (menuSelector == 1)
		{
			cout << "Podaj wspolrzedna x pierwszego wektora: " << endl;
			cin >> firstVectorX;
			cout << "Podaj wspolrzedna y pierwszego wektora: " << endl;
			cin >> firstVectorY;
			cout << "Podaj wspolrzedna z pierwszego wektora: " << endl;
			cin >> firstVectorZ;
			cout << "Podaj wspolrzedna x drugiego wektora: " << endl;
			cin >> secondVectorX;
			cout << "Podaj wspolrzedna y drugiego wektora: " << endl;
			cin >> secondVectorY;
			cout << "Podaj wspolrzedna z drugiego wektora: " << endl;
			cin >> secondVectorZ;

			Wektor wk(firstVectorX, firstVectorY, firstVectorZ);
			Wektor wkt(secondVectorX, secondVectorY, secondVectorZ);

			if (wk == wkt)
				cout << "Wektory sa rowne" << endl;

			if (wk != wkt)
				cout << "Wektory sa rozne" << endl;

		}
		else
			break;
	}
	system("pause");
	return 0;
}

