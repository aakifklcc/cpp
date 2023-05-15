
#include <iostream>
using namespace std;

int main()
{
    
    int ucret,yas;
    cout << "Yasınızı giriniz:";
    cin >> yas;
    if (yas< 0)
        cout << " lütfen sıfırdan büyük değer giriniz";
    else if(yas<18)
        ucret = 15;
    else if(yas<65)
        ucret = 20;
    else
        ucret = 10;
   cout << "Ödemeniz gereken ücret: "<< ucret;
    return 0;

}
