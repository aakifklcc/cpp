#include <iostream>
using namespace std;
int main() {
    int sayi, sayiDizisi[10];
    cout<< "Lutfen bir sayi giriniz."<< endl;
    cin>>sayi;
    
    srand(time(0));
    for(int i=0; i<10; i++) {
        sayiDizisi[i]= 1+rand()%10;
    }
    int kontrol=0;

    for(int j=0; j<10; j++) {

        if(sayiDizisi[j]==sayi) {
            kontrol=1;
            cout<<"deger bulundu \n";
            break;
         }
         
    }
    if (kontrol ==0) {
        cout<<"Deger bulunamadı"<< endl;
    }

    //Dizide olusan random sayilari gorme
    for(int k=0; k<10; k++) {
        cout<< sayiDizisi[k]<< " ";
        
    }
  
    return 0;
}