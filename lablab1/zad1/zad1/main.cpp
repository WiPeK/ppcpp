#include <iostream>

using namespace std;


int main()
{
    float kg;
    cout << "Podaj kg do przeliczenia: " << endl;
    cin >> kg;
    if(kg <= 0){
        cout << "Kilogramy nie moga byc mniejsze od 0" << endl;
    }
    else
    {
        cout << kg << " po zamianie na funty: " << kg*2.204 << endl;
    }
    return 0;
}
