#include <iostream>
using namespace std;

void alanHesapla(double taban, double yukseklik) {
    double alan= (taban*yukseklik)/2;
    cout<< "Ucgenin Alani: "<< alan<<endl;
}
void CevreHesapla(int kisaKenar, int uzunKenar) {
    int cevre= 2*(kisaKenar+uzunKenar);
    cout<< "Dikdortgenin cevresi: "<< cevre<<endl;
}
int main() {
    alanHesapla(4,6);
    CevreHesapla(4,6);
    
    return 0;
}