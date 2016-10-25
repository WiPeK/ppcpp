#include<iostream>
#include<map>
#include <string>
using namespace std;

template <class T, class K> class Translator
{
private: 
	map<T, K> dictionary;

public:
	void addEnglishWord()
	{
		T englishWord;
		K polishWord;
		cout << "Podaj slowo [po angielsku]" << endl;
		cin.ignore();
		getline(cin, englishWord);
		cout << "\nPodaj tlumaczenie do slowa: " << englishWord << endl;

		getline(cin, polishWord);
		dictionary[englishWord] = polishWord;
	}

	void findTranslate()
	{
		T englishWordToTranslate;
		cout << "Wyszukaj slowo [po angielsku]" << endl;
		cin.ignore();
		getline(cin, englishWordToTranslate);
		map<T, K>::iterator dictionaryIterator;
		dictionaryIterator = dictionary.find(englishWordToTranslate);
		cout << englishWordToTranslate << " w jezyku polskim oznacza: " << dictionaryIterator->second << endl;
	}

	void displayDictionary()
	{
		map<T, K>::iterator dictionaryIterator;
		for (dictionaryIterator = dictionary.begin(); dictionaryIterator != dictionary.end(); dictionaryIterator++) {
			cout << dictionaryIterator->first << " - " << dictionaryIterator->second << endl;
		}
	}


};

void displayMenu()
{
	cout << "1: Dodaj slowo [po angielsku]." << endl;
	cout << "2: Wyszukaj tlumaczenie slowa." << endl;
	cout << "3: Wyswietl slownik." << endl;
	cout << "0: Zakoncz program." << endl;
}



int main()
{
	Translator <string, string> dict;
	while (1)
	{
		int menuSelector;
		displayMenu();
		cin >> menuSelector;

		if (menuSelector == 1)
		{
			dict.addEnglishWord();
		}
		else if (menuSelector == 2)
		{
			dict.findTranslate();
		}
		else if (menuSelector == 3)
		{
			dict.displayDictionary();
		}
		else if (menuSelector == 0)
			break;
	}
	system("pause");
	return 0;
}