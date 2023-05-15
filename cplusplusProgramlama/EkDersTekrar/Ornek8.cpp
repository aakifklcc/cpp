#include <iostream>
using namespace std;

void factoriyelHesapla(int sayi) {
    int factoriyel=1;
    if (sayi <1) {
       cout<<"Lutfen 1'den buyuk bir deger seciniz.";
    }
    else {
        for(int i=1; i<=sayi; i++) {
         factoriyel *=i;
        }
    cout<< "Sectiginiz sayinin faktoriyeli: "<< factoriyel<<endl;
    }
    
}
int main() {
    int sayi;
    cout<<"Lutfen faktoriyelini almak istediginiz sayiyi giriniz."<<endl;
    cin>> sayi;
    factoriyelHesapla(sayi);
    
    return 0;
}