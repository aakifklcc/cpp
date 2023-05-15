#include <iostream>
#include <cstdlib>
using namespace std;

class Araba {

public:
    char marka[30];
    char model[30];

    string ad;
    float fiyat;
    int hiz;

    void hizlanma();
    void yavaslama();


};

void Araba::hizlanma()
{
    hiz = hiz + 10;
    cout << "Araba hizlaniyor." << endl;
}
void Araba::yavaslama()
{
    hiz = hiz - 10;
    cout << "Araba yavasliyor." << endl;
}


int main () {

Araba araba1;
strcpy(araba1.marka, "Suzuki");
araba1.ad="deneyap";
araba1.hiz=56;
//araba1.hiz=56;
cout<<"hızd egeri: "<< araba1.hiz<< endl;
araba1.yavaslama();
cout<<"araba markasi: "<<araba1.marka<< " hızd egeri"<< araba1.hiz;

return 0;

}