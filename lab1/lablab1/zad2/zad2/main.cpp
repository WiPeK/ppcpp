#include <iostream>

using namespace std;

class Converter{
private:
    float kilos;
public:
    Converter(float kilos)
    {
        this->kilos = kilos;
    }

    float ToPounds()
    {
        return this->kilos * 2.204;
    }

    void display()
    {
        cout << this->kilos << " po zamianie na funty: " << ToPounds() << endl;
    }

};

int main()
{
    float kg;
    cout << "Podaj kg do przeliczenia: " << endl;
    cin >> kg;
    Converter wg(kg);
    wg.display();
    return 0;
}
