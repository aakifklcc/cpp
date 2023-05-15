#include <iostream>
using namespace std;
int main() {
   int sayi1, sayi2,sayi3, enKucuk;
    cout<< "Lutfen birinci sayiyi giriniz."<< endl;
    cin>> sayi1;
    cout<< "Lutfen ikinci sayiyi giriniz."<< endl;
    cin>> sayi2;
    cout<< "Lutfen ucuncu sayiyi giriniz."<< endl;
    cin>> sayi3;
    
   // Uzerinde dusunmeniz gereken efektif cozum:
  enKucuk=sayi1;
    if(sayi2<enKucuk){
        enKucuk = sayi2;
    }
    if(sayi3<enKucuk){
        enKucuk = sayi3;
    }
    cout<<enKucuk<< " En kucuk sayidir.";
    return 0;
   
}