#include <iostream>
using namespace std;

int main () {

int i;
int toplam=0;
int ortalama;

cout<< " Öğrencilerin notlarını girelim"<< endl;
for ( i=1; i<6; i++) {
        int ogrenciNotu;
        cin >> ogrenciNotu;
        toplam = toplam + ogrenciNotu;
    }
    ortalama=toplam/5;
    cout<< "Sınıfın not ortalaması: "<<ortalama<<endl;
}



