#include<iostream>
#include<map>
#include <string>
using namespace std;

void displayMenu()
{
	cout << "1: Dodaj slowo [po angielsku]." << endl;
	cout << "2: Wyszukaj tlumaczenie slowa." << endl;
	cout << "3: Wyswietl slownik." << endl;
	cout << "0: Zakoncz program." << endl;
	cout << endl;
}



int main()
{

	map<string, string> dictionary;
	while (1)
	{
		//system("cls");
		int menuSelector;
		displayMenu();
		cin >> menuSelector;

		if (menuSelector == 1)
		{
			string englishWord, polishWord;
			cout << "Podaj slowo [po angielsku]" << endl;
			cin.ignore();
			getline(cin, englishWord);
			cout << "\nPodaj tlumaczenie do slowa: " << englishWord << endl;

			getline(cin, polishWord);
			dictionary[englishWord] = polishWord;
			cout << endl;
		}
		else if (menuSelector == 2)
		{
			string englishWordToTranslate;
			cout << "Wyszukaj slowo [po angielsku]" << endl;
			cin.ignore();
			getline(cin, englishWordToTranslate);
			map<string, string>::iterator dictionaryIterator;
			dictionaryIterator = dictionary.find(englishWordToTranslate);
			cout << englishWordToTranslate << " w jezyku polskim oznacza: " << dictionaryIterator->second << endl;
            cout << endl;
		}
		else if (menuSelector == 3)
		{
			map<string, string>::iterator dictionaryIterator;
			for (dictionaryIterator = dictionary.begin(); dictionaryIterator != dictionary.end(); dictionaryIterator++) {
				cout << dictionaryIterator->first << " - " << dictionaryIterator->second << endl;
			}
			cout << endl;
		}
		else if (menuSelector == 0)
			break;
	}
	system("pause");
	return 0;
}
