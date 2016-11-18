#include<iostream>

using namespace std;

class Wektor {
private:
	double x, y, z;

public:
	Wektor() : x(0.0), y(0.0), z(0.0) {}

	Wektor(double v) : x(v), y(v), z(v) {}

	Wektor(double x, double y, double z) : x(x), y(y), z(z) {}

	friend bool operator== (const Wektor v, const Wektor v2);

	friend bool operator!= (const Wektor v, const Wektor v2);

	friend ostream & operator<<(ostream & wyjscie, Wektor & w);

	friend istream & operator >> (istream & wejscie, Wektor & w);

};

bool operator== (const Wektor v, const Wektor v2)
{
	return (v.x == v2.x && v.y == v2.y && v.z == v2.z);
}


bool operator!= (const Wektor v, const Wektor v2)
{
	return (v.x != v2.x || v.y != v2.y || v.z != v2.z);
}

ostream & operator<<(ostream & wyjscie, Wektor & w) {
	wyjscie << "Oto wspolrzedne punktu (x, y, z)" << endl;
	wyjscie << "(" << w.x << ", " << w.y << ", " << w.z << ")" << endl;
	return wyjscie;
}istream & operator >> (istream & wejscie, Wektor & w) {
	wejscie >> w.x;
	wejscie >> w.y;
	wejscie >> w.z;
	return wejscie;
}

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
		double firstVectorXYZ;
		double secondVectorXYZ;
		Wektor wk;
		Wektor wkt;
		if (menuSelector == 1)
		{
			cout << "Podaj wspolrzedna x , y , z pierwszego wektora: " << endl;
			cin >> wk;
			cout << "Podaj wspolrzedna x , y , z drugiego wektora: " << endl;
			cin >> wkt;
			cout << wk;
			cout << wkt;

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