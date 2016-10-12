// zad3.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

class Converter {
private:
	static double conv;
public:
	static void display(float kilos)
	{
		cout << kilos << " to: " << kilos * Converter::conv << " funtów." << endl;
	}
};

double Converter::conv = 2.204;
int main()
{
	
	try {
		float kilos;
		cout << "Podaj kilogramy do przeliczenia na funty: ";
		cin >> kilos;
		if (!(kilos <= 0))
		{
			Converter weight;
			weight.display(kilos);
		}
		else throw 1;
	}
	catch (...)
	{
		cout << "Podana waga jest niepoprawna.";
	}

	system("pause");
	return 0;
}

