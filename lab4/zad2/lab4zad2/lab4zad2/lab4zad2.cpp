#include<iostream>

using namespace std;

class Ulamek {
private:
	int licznik, mianownik;
public:
	Ulamek(int l, int m)
	{
		this->licznik = l;
		this->mianownik = m;
	}

	Ulamek& operator*= (const Ulamek &v) {
		this->licznik *= v.licznik;
		this->mianownik *= v.mianownik;
		return(*this);
	}	int getLicznik()	{		return this->licznik;	}	int getMianownik()	{		return this->mianownik;	}

};


int main()
{
	int fl, fm, sl, sm;
	cout << "Podaj licznik 1 ulamka" << endl;
	cin >> fl;
	cout << "Podaj mianownik 1 ulamka" << endl;
	cin >> fm;
	cout << "Podaj licznik 2 ulamka" << endl;
	cin >> sl;
	cout << "Podaj mianownik 2 ulamka" << endl;
	cin >> sm;
	Ulamek ful(fl, fm);
	Ulamek sul(sl, sm);
	ful *= sul;

	cout << fl << "/" << fm << " * " << sl << "/" << sm << " = " << ful.getLicznik() << "/" << ful.getMianownik() << endl;

	system("pause");
    return 0;
}

