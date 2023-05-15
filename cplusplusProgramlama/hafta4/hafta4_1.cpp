#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Bir sayinin 3 ile bolünüp bolunmeigini kontrol ettirme
    int sayi;
    cout << "lütfen bir sayı giriniz!";
    cin >> sayi;

    if (sayi >= 0)
    {
        if (sayi % 3 == 0)
        {
            cout << " Sayi üçe tam bölünüyoreeee \n";
        }
        else
        {
            cout << " Sayi üçe tam bölünmüyoreeee \n";
        }
    }
    else
    {
        cout << "Negatif sayı girdiniz.";
    }

    return 0;
}