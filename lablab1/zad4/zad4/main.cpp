#include <iostream>

using namespace std;

class StaleMatematyczne{
    public:
    static float val;
};
float StaleMatematyczne::val = 2.204;
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
        cout << kg << " po zamianie na funty: " << kg*StaleMatematyczne::val << endl;
    }
    return 0;
}
