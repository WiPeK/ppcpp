#include<iostream>
#include<set>
#include <string>
using namespace std;

void displayMenu()
{
	cout << "1: Dodaj ucznia." << endl;
	cout << "2: Usun ucznia." << endl;
	cout << "3: Wyswietl liste uczniow." << endl;
	cout << "0: Zakoncz program." << endl;
}

void displayStudentsList(set<string> students)
{
	set<string>::iterator it;
	int i = 0;
	cout << "\nLista uczniow: " << endl;
	for (it = students.begin(); it != students.end(); ++it)
	{

		cout << i << ": " << *it << endl;
		i++;
	}
	i = 0;
	cout << endl;
}

int main()
{

	set<string> students;
	while (1)
	{
		int menuSelector;
		displayMenu();
		cin >> menuSelector;

		if (menuSelector == 1)
		{
			string student;
			cout << "Podaj imie i nazwisko ucznia." << endl;
			cin.ignore();
			getline(cin, student);
			students.insert(student);
			cout << endl;
		}
		else if (menuSelector == 2)
		{
			try
			{
				if (students.empty()) throw 1;
				displayStudentsList(students);
				int nrStudentToDelete;
				cout << "Podaj nr ucznia ktorego chcesz usunac: " << endl;
				cin >> nrStudentToDelete;
				if (nrStudentToDelete < 0) throw 2;

				set<string>::iterator it;
				int i = 0;
				for (it = students.begin(); it != students.end(); it++)
				{
					if (nrStudentToDelete == i)
						students.erase(it++);
					i++;
				}
				i = 0;
			}
			catch (int ex)
			{
				if(ex == 1)
					cout << "Lista uczniow jest pusta" << endl;
				if (ex == 2)
					cout << "Wybierz inny nr ucznia 0-n" << endl;
			}
		}
		else if (menuSelector == 3)
		{
			try
			{
				if (students.empty()) throw 1;
				displayStudentsList(students);
			}
			catch (int ex)
			{
				if (ex == 1)
					cout << "Lista uczniow jest pusta" << endl;
			}
		}
		else if (menuSelector == 0)
			break;
	}
	system("pause");
	return 0;
}
