
#include <iostream>
using namespace std;
int main()
{
    // Calıstıgı sureye gore maas hesabi
    int saat, maas;
    cout << "kac saat calisti:";
    cin >> saat;
    if (saat < 100)
        maas = saat * 5;
    else if (saat < 250)
        maas = saat * 5 * 2;
    else
        maas = saat * 5 * 3;
    cout << "Maasiniz: " << maas<<endl;
    return 0;
}
