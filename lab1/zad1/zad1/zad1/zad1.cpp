// zad1.cpp : Defines the entry point for the console application.
//

#include <iostream>

using namespace std;

class Converter{
private:
	float kilos;
public:
	Converter(float kilos)
	{
		this->kilos = kilos;
	}
	float ToPounds()
	{
		return this->kilos * 2.204;
	}
};


int main()
{
	try {
		float kilos;
		cout << "Podaj kilogramy do przeliczenia na funty: ";
		cin >> kilos;
		if (!(kilos <= 0))
		{
			Converter weight(kilos);
			cout << kilos << " to " << weight.ToPounds() << " funtów." << endl;
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

