#include<iostream>

using namespace std;

class Ulamek {
private:
	int licznik, mianownik;
public:
	Ulamek(){
		this->licznik = 1;
		this->mianownik = 1;
	}
	Ulamek(int l, int m)
	{
		this->licznik = l;
		this->mianownik = m;
	}	int getLicznik()	{		return this->licznik;	}	int getMianownik()	{		return this->mianownik;	}		friend Ulamek operator* (const Ulamek v1, const Ulamek v2);	friend ostream & operator<<(ostream & wyjscie, Ulamek & w);	friend istream & operator >> (istream & wejscie, Ulamek & w);};

ostream & operator<<(ostream & wyjscie, Ulamek & w) {
	wyjscie << "Ulamek: ";
	wyjscie << w.licznik << "/" << w.mianownik << endl;
	return wyjscie;
}

istream & operator >> (istream & wejscie, Ulamek & w) {
	wejscie >> w.licznik;
	wejscie >> w.mianownik;
	return wejscie;
}

Ulamek operator* (const Ulamek v, const Ulamek v2) {
	int l, m;
	l = v.licznik * v2.licznik;
	m = v.mianownik * v2.mianownik;
	return(Ulamek(l,m));
}

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
	ful = ful * sul;

	cout << "Pomnozone ulamki: ";
	cout << ful;

	system("pause");
	return 0;
}

