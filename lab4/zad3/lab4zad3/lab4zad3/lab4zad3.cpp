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
	}	int getLicznik()	{		return this->licznik;	}	int getMianownik()	{		return this->mianownik;	}		friend Ulamek operator* (const Ulamek v1, const Ulamek v2);};

Ulamek operator* (const Ulamek v, const Ulamek v2) {
	int l, m;
	l = v.licznik * v2.licznik;
	m = v.mianownik * v2.mianownik;
	return(Ulamek(l,m));
}

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
	ful = ful * sul;

	cout << fl << "/" << fm << " * " << sl << "/" << sm << " = " << ful.getLicznik() << "/" << ful.getMianownik() << endl;

	system("pause");
	return 0;
}

