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


	void wyswietl()
	{
		cout << godziny << " : " << minuty << " : " << sekundy << endl;
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
	czs.wyswietl();
	system("pause");
	return 0;
}

