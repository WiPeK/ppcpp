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
    while(1)
    {
        displayMenu();
        cin >> menu;
        if(menu == 1)
        {
            cin >> value;
            lista.push_front(value);
            system("cls");
        }
        else if(menu == 2)
        {
            lista.pop_front();
            system("cls");
        }
        else if(menu == 3)
        {
            system("cls");
            for(it=lista.begin();it!=lista.end();it++)
            cout << *it << endl;

        }
        else if(menu == 4)
        {
                it=lista.begin();
                 cout <<"szczyt stosu: "<< *it << endl;
        }
        else break;
    }
    return 0;
}
