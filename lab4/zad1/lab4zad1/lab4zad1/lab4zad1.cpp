#include<iostream>

using namespace std;

class Wektor {
private:
	double x, y;

public:
	Wektor() {
		x = y = 0.0;
	}

	Wektor(double v)
	{
		x = y = v;
	}

	Wektor(double v, double z)
	{
		this->x = v;
		this->y = z;
	}

	Wektor& operator+= (const Wektor &v)
	{
		this->x += v.x;
		this->y += v.y;
		return(*this);
	}

	Wektor& operator -= (const Wektor &v)
	{
		this->x -= v.x;
		this ->y -= v.y;
		return(*this);
	}

	double getx()
	{
		return this->x;
	}

	double gety()
	{
		return this->y;
	}
};

void displayMenu()
{
	cout << "Wybierz operacje na wektorach" << endl;
	cout << "1. Dodaj wektory" << endl;
	cout << "2. Odejmij wektory" << endl;
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
		double secondVectorX;
		double secondVectorY;
		if (menuSelector == 1)
		{
			cout << "Podaj wspolrzedna x pierwszego wektora: " << endl;
			cin >> firstVectorX;
			cout << "Podaj wspolrzedna y pierwszego wektora: " << endl;
			cin >> firstVectorY;
			cout << "Podaj wspolrzedna x drugiego wektora: " << endl;
			cin >> secondVectorX;
			cout << "Podaj wspolrzedna y drugiego wektora: " << endl;
			cin >> secondVectorY;
			Wektor wk(firstVectorX, firstVectorY);
			Wektor wkt(secondVectorX, secondVectorY);

			wk += wkt;
			cout << "Suma wektorow: [" << wk.getx() << "," << wk.gety() << "]" << endl;

		}
		else if (menuSelector == 2)
		{
			cout << "Podaj wspolrzedna x pierwszego wektora: " << endl;
			cin >> firstVectorX;
			cout << "Podaj wspolrzedna y pierwszego wektora: " << endl;
			cin >> firstVectorY;
			cout << "Podaj wspolrzedna x drugiego wektora: " << endl;
			cin >> secondVectorX;
			cout << "Podaj wspolrzedna y drugiego wektora: " << endl;
			cin >> secondVectorY;
			Wektor wk(firstVectorX, firstVectorY);
			Wektor wkt(secondVectorX, secondVectorY);

			wk -= wkt;
			cout << "Roznica wektorow: [" << wk.getx() << "," << wk.gety() << "]" << endl;
		}
		else
			break;
	}
	system("pause");
    return 0;
}

