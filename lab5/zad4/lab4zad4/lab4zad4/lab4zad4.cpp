#include<iostream>

using namespace std;

class Wektor {
private:
	double x, y, z;

public:

	bool operator== (const Wektor& v)
	{
		return (this->x == v.x && this->y == v.y && this->z == v.z);
	}

	bool operator!= (const Wektor& v)
	{
		return (this->x != v.x || this->y != v.y || this->z != v.z);
	}

	friend ostream & operator<<(ostream & wyjscie, Wektor & w) {
		wyjscie << "Oto wspolrzedne punktu (x, y, z)" << endl;
		wyjscie << "(" << w.x << ", " << w.y << ", " << w.z << ")" << endl;
		return wyjscie;
	}	friend istream & operator >> (istream & wejscie, Wektor & w) {
		wejscie >> w.x;
		wejscie >> w.y;
		wejscie >> w.z;
		return wejscie;
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

