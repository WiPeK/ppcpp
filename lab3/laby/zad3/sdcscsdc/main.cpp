#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = rand()%21;
    cout << "Losowanie: czy isc na wyklad?\n";
    if(a != 0)
        cout << "Tak";
    else
        cout << "Nie";
    return 0;
}
