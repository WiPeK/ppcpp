// zad1.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include<ctime>

using namespace std;

template <typename T> void fillRandomArray(T *tab, int N) {
	for (int i = 0; i < N; i++)
	{
		tab[i] = (float)(rand() % 1000);
	}
};

template <typename T> void bubbleSort(T *tab, int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (tab[j] > tab[j + 1])
				swap(tab[j], tab[j + 1]);

		}
	}
}

template <typename T> void quickSort(T *tab, int left, int right)
{
	int i = left;
	int j = right;
	T x = tab[(left + right) / 2];
	do
	{
		while (tab[i] < x)
			i++;

		while (tab[j] > x)
			j--;

		if (i <= j)
		{
			swap(tab[i], tab[j]);

			i++;
			j--;
		}
	} while (i <= j);

	if (left < j) quickSort(tab, left, j);

	if (right > i) quickSort(tab, i, right);
}

template <typename T> void insertingSort(T *tab, int N)
{
	T pom;
	int j;
	for (int i = 1; i<N; i++)
	{
		pom = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j]>pom)
		{
			tab[j + 1] = tab[j];
			--j;
		}
		tab[j + 1] = pom;
	}
}

template <typename T> void displayArray(T *tab, int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << tab[i] << " ";
	}
	cout << endl;
}

int main()
{
	srand(time(0));
	const int tab_size = 10;
	int int_tab[tab_size];
	float float_tab[tab_size];
	char char_tab[tab_size];
	
	fillRandomArray<int>(int_tab, tab_size);
	fillRandomArray<float>(float_tab, tab_size);
	fillRandomArray<char>(char_tab, tab_size);

	cout << "Tablica int po wypelnieniu: " << endl;
	displayArray<int>(int_tab, tab_size);

	cout << "Tablica float po wypelnieniu: " << endl;
	displayArray<float>(float_tab, tab_size);

	cout << "Tablica char po wypelnieniu: " << endl;
	displayArray<char>(char_tab, tab_size);

	cout << "Tablica int po sortowaniu babelkowym: " << endl;
	bubbleSort<int>(int_tab, tab_size);
	displayArray<int>(int_tab, tab_size);

	cout << "Tablica float po sortowaniu babelkowym: " << endl;
	bubbleSort<float>(float_tab, tab_size);
	displayArray<float>(float_tab, tab_size);

	cout << "Tablica char po sortowaniu babelkowym: " << endl;
	bubbleSort<char>(char_tab, tab_size);
	displayArray<char>(char_tab, tab_size);

	fillRandomArray<int>(int_tab, tab_size);
	fillRandomArray<float>(float_tab, tab_size);
	fillRandomArray<char>(char_tab, tab_size);

	cout << "Tablica int po ponownym wypelnieniu: " << endl;
	displayArray<int>(int_tab, tab_size);

	cout << "Tablica float po ponownym wypelnieniu: " << endl;
	displayArray<float>(float_tab, tab_size);

	cout << "Tablica char po ponownym wypelnieniu: " << endl;
	displayArray<char>(char_tab, tab_size);

	cout << "Tablica int po sortowaniu quicksort: " << endl;
	quickSort<int>(int_tab, 0, tab_size-1);
	displayArray<int>(int_tab, tab_size);

	cout << "Tablica float po sortowaniu quicksort: " << endl;
	quickSort<float>(float_tab, 0, tab_size-1);
	displayArray<float>(float_tab, tab_size);

	cout << "Tablica char po sortowaniu quicksort: " << endl;
	quickSort<char>(char_tab, 0, tab_size-1);
	displayArray<char>(char_tab, tab_size);

	fillRandomArray<int>(int_tab, tab_size);
	fillRandomArray<float>(float_tab, tab_size);
	fillRandomArray<char>(char_tab, tab_size);

	cout << "Tablica int po ponownym wypelnieniu: " << endl;
	displayArray<int>(int_tab, tab_size);

	cout << "Tablica float po ponownym wypelnieniu: " << endl;
	displayArray<float>(float_tab, tab_size);

	cout << "Tablica char po ponownym wypelnieniu: " << endl;
	displayArray<char>(char_tab, tab_size);

	cout << "Tablica int po sortowaniu przez wstawianie: " << endl;
	insertingSort<int>(int_tab, tab_size);
	displayArray<int>(int_tab, tab_size);

	cout << "Tablica float po sortowaniu przez wstawianie: " << endl;
	insertingSort<float>(float_tab, tab_size);
	displayArray<float>(float_tab, tab_size);

	cout << "Tablica char po sortowaniu przez wstawianie: " << endl;
	insertingSort<char>(char_tab, tab_size);
	displayArray<char>(char_tab, tab_size);

	system("pause");
    return 0;
}

