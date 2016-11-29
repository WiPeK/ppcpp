#include <iostream>
#include <list>
using namespace std;

void displayMenu()
{
	cout << "1. Dodaj wartosc do stosu." << endl;
	cout << "2. Usun wartosc ze stosu" << endl;
	cout << "3. Wyswietl stos" << endl;
	cout << "4. Wyswietl wierzcholek stosu." << endl;
	cout << "0. Zakoncz program." << endl;
}

int main()
{
	list<int> lista;
	int menu;
	int value;
	list<int>::iterator it;
	while (1)
	{
		displayMenu();
		cin >> menu;
		if (menu == 1)
		{
			cin >> value;
			lista.push_front(value);
		}
		else if (menu == 2)
		{
			try {
				if (lista.empty()) throw 1;
				lista.pop_front();
			}
			catch (int ex)
			{
				if(ex == 1)
					cout << "Stos jest pusty" << endl;
			}
		}
		else if (menu == 3)
		{
			try {
				if (lista.empty()) throw 1;
				for (it = lista.begin(); it != lista.end(); it++)
					cout << *it << endl;
			}
			catch (int ex)
			{
				if (ex == 1)
					cout << "Stos jest pusty" << endl;
			}
		}
		else if (menu == 4)
		{
			try {
				if (lista.empty()) throw 1;
				it = lista.begin();
					cout << "szczyt stosu: " << *it << endl;
			}
			catch (int ex)
			{
				if (ex == 1)
					cout << "Stos jest pusty" << endl;
			}
		}
		else break;
	}
	return 0;
}
