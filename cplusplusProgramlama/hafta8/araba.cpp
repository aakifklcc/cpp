#include <iostream>
#include <cstdlib>
using namespace std;

class Araba {

    public:
     string marka;
     char marka1 [30]; 
     int hiz;
     float fiyat;

     void hizlanma();
     void yavaslama();

};

void Araba::hizlanma(){

hiz = hiz+100;
cout<<"Araba Hizlandi: \n";
}

void Araba::yavaslama(){

hiz = hiz-50;
cout<<"Araba yavasladu: \n";
}

int main () {

    Araba  yerliaraba, yerliaraba2, yerliaraba3;

    yerliaraba.marka="Togg"; //string
    strcpy(yerliaraba.marka1, "TOGGggggg"); // karakter dizisi ile char [30]

    yerliaraba.hiz=300;
    yerliaraba.fiyat=1200000;

    cout<<"Arabamızın markasi:" << yerliaraba.marka<< endl;
    cout<<"Arabamızın hızı:" <<  yerliaraba.hiz<< endl;
    cout<<"Arabamızın fiyati:" <<  yerliaraba.fiyat<< endl;
    cout<<"karakterle marka:" << yerliaraba.marka1<< endl;

    yerliaraba.hizlanma();
    cout<<"Arabamızın hızı:" <<  yerliaraba.hiz << endl;
    yerliaraba.yavaslama();
    return 0;

}





















