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

//void displayStudentsList(set<string> students)
//{
	//set<string>::iterator it;
	//int i;
	//for (it = students.begin(); it != students.end(); ++it, i++)
	//	cout << i << ": " *it << endl;
//}

int main()
{

	set<string> students;
	while (1)
	{
		//system("cls");
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
		}
		else if (menuSelector == 2)
		{
			//displayStudentsList(students);
			set<string>::iterator it;
			int i;
			for (it = students.begin(); it != students.end(); ++it, i++)
				cout << i << ": " it << endl;
		}
		else if (menuSelector == 3)
		{
			//displayStudentsList(students);
		}
		else if (menuSelector == 0)
			break;
	}
	system("pause");
	return 0;
}
