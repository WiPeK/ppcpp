// zad4.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

class StaleMatematyczne {
public:
	static float conv;
};

float StaleMatematyczne::conv = 2.204;
int main()
{
	try {
		float kilos;
		cout << "Podaj kilogramy do przeliczenia na funty: ";
		cin >> kilos;
		if (!(kilos <= 0))
		{
			cout << kilos << " to " << kilos * StaleMatematyczne::conv << " funtów." << endl;
		}
		else throw;
	}
	catch (...)
	{
		cout << "Podana waga jest niepoprawna.";
	}

	system("pause");
	return 0;
}

