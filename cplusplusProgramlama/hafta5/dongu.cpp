#include <iostream>
using namespace std;

int main()
{

    /*
    // 0-20 arasiCift sayilari yazdirma
    for (int sayi=0; sayi< 20; sayi++) {
           if (sayi%2 == 1) {

               cout << sayi   << endl;

           }


       } */
    // ***********************************************************************

    /*
    // 1 den 25 e kadar sayialri yazdirma
        int sayi =1;
        while (sayi< 25) {
            cout << sayi << endl;
            sayi=sayi+1;
        }
        */
    // ***********************************************************************
    /* 
    // while dongusu ile cift sayilari yazdirma
     int sayi=0;
     while (sayi < 20) {
          if (sayi % 2 == 1) {
              cout << sayi << endl;
          }

      sayi++;
     } */
    // ***********************************************************************
    // do while dongusu ile yazdirma
    int sayi = 0;
    do
    {
        if (sayi % 2 == 1)
        {
            cout << sayi << endl;
        }
        sayi++;
    } while (sayi < 20);

    return 0;
}
