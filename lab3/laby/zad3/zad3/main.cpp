#include <iostream>
#include<list>
using namespace std;
template <class T> class kl_list{
    public:
list<T>lista;
};
int main()
{   kl_list<string> a;
    a.lista.push_back("kilka slow");
    a.lista.push_back("kilka ");
    a.lista.push_back("kilka razy");
    a.lista.push_back("nic");
    list<string>::iterator i;
    cout<<"klasa z lista typu string: "<<endl;
    for(i=a.lista.begin();i!=a.lista.end();++i)
        cout<<*i<<endl;
 kl_list<int> b;
 b.lista.push_back(7);
 b.lista.push_back(5);
 b.lista.push_back(2);
 b.lista.push_back(4);
 b.lista.push_back(6);
 list<int>::iterator j;
 cout<<endl<<"klasa z lista typu int: "<<endl;
 for(j=b.lista.begin();j!=b.lista.end();++j)
        cout<<*j<<endl;
    return 0;
}
