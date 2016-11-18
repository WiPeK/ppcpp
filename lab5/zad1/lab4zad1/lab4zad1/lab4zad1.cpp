#include<iostream>

using namespace std;

class Wektor {
private:
	double x, y;

public:

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

	friend ostream & operator<<(ostream & wyjscie, Wektor & w) {
		wyjscie << "Oto wspolrzedne punktu (x, y)" << endl;
		wyjscie << "(" << w.x << ", " << w.y << ")" << endl;
		return wyjscie;
	}	friend istream & operator >> (istream & wejscie, Wektor & w) {
		wejscie >> w.x;
		wejscie >> w.y;
		return wejscie;
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
	cout << endl;
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
		double firstVectorXY;
		double secondVectorXY;
		Wektor wk;
		Wektor wkt;
		if (menuSelector == 1)
		{
			cout << "Podaj wspolrzedna x i y pierwszego wektora: " << endl;
			cin >> wk;
			cout << "Podaj wspolrzedna x i y drugiego wektora: " << endl;
			cin >> wkt;
			
			cout << wk;
			cout << wkt;
			wk += wkt;
			cout << "Suma wektorow: [" << wk.getx() << "," << wk.gety() << "]" << endl;

		}
		else if (menuSelector == 2)
		{
			cout << "Podaj wspolrzedna x i y pierwszego wektora: " << endl;
			cin >> wk;
			cout << "Podaj wspolrzedna x i y drugiego wektora: " << endl;
			cin >> wkt;
			
			cout << wk;
			cout << wkt;
			wk -= wkt;
			cout << "Roznica wektorow: [" << wk.getx() << "," << wk.gety() << "]" << endl;
		}
		else
			break;
	}
	system("pause");
    return 0;
}

