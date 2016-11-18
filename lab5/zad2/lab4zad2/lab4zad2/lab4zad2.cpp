#include<iostream>

using namespace std;

class Ulamek {
private:
	int licznik, mianownik;
public:


	Ulamek& operator*= (const Ulamek &v) {
		this->licznik *= v.licznik;
		this->mianownik *= v.mianownik;
		return(*this);
	}	friend ostream & operator<<(ostream & wyjscie, Ulamek & w) {
		wyjscie << "Ulamek: ";
		wyjscie << w.licznik << "/" << w.mianownik << endl;
		return wyjscie;
	}	friend istream & operator >> (istream & wejscie, Ulamek & w) {
		wejscie >> w.licznik;
		wejscie >> w.mianownik;
		return wejscie;
	}	int getLicznik()	{		return this->licznik;	}	int getMianownik()	{		return this->mianownik;	}

};


int main()
{
	Ulamek ful;
	Ulamek sul;
	cout << "Podaj licznik i mianownik 1 ulamka" << endl;
	cin >> ful;
	cout << "Podaj liczniki mianownik 2 ulamka" << endl;
	cin >> sul;
	cout << ful;
	cout << sul;
	ful *= sul;
	cout << "Pomnozone ulamki: ";
	cout << ful;
	system("pause");
    return 0;
}

