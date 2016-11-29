#include <iostream>

using namespace std;

class Converter{
private:
    float kilos;
    static float val;
public:
    Converter()
    {
        cout << "Podaj kg do przeliczenia: " << endl;
        cin >> this->kilos;
    }

    float ToPounds()
    {
        return this->kilos * val;
    }

    void display()
    {
        cout << this->kilos << " po zamianie na funty: " << ToPounds() << endl;
    }

};
float Converter::val=2.204;
int main()
{
        Converter wg;
        wg.display();
    return 0;
}
