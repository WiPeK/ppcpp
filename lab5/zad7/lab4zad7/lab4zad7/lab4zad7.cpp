#include<iostream>

using namespace std;

class Czas {
private:
	int godziny, minuty, sekundy;

public:
	Czas(int g, int m, int s) : godziny(g), minuty(m), sekundy(s) {}
	
	Czas& operator=(const Czas& cz) {
		this->godziny = cz.godziny;
		this->minuty = cz.minuty;
		this->sekundy = cz.sekundy;
		return *this;
	}

	friend ostream & operator<<(ostream & wyjscie, Czas & w) {
		cout << w.godziny << " : " << w.minuty << " : " << w.sekundy << endl;
		return wyjscie;
	}
};

int main()
{
	int godziny, minuty, sekundy;
	cout << "Podaj godziny" << endl;
	cin >> godziny;
	cout << "Podaj minuty" << endl;
	cin >> minuty;
	cout << "Podaj sekundy" << endl;
	cin >> sekundy;
	Czas cz(godziny, minuty, sekundy);
	Czas czs = cz;
	cout << czs;
	system("pause");
	return 0;
}

