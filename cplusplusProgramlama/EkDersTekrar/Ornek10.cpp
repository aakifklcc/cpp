#include <iostream>
using namespace std;

class Deneyap{

    public:
        string ad;
        string soyad;
        int yas;
};

int main (){

    Deneyap ogrenci1, ogrenci2, ogrenci3;

    ogrenci1.ad="Abur";
    ogrenci1.soyad="Cubur";
    ogrenci1.yas=18;

    cout<< "Merhaba "<< ogrenci1.ad<< " "<<ogrenci1.soyad<< endl;
    cout<< ogrenci1.yas<< ". yasin sana mutluluk getirsin."<< endl;

    return 0;
}