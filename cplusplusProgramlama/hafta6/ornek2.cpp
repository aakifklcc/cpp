#include <iostream>
using namespace std;
int main()
{
    char dizi[4]; // 4 karakter uzunlugunda isim alir
    char katar[5]; // 5 karakter uzunlugunda ikinci ismi alir
    int i;

    cout << "İlk ismin karakterlerini giriniz: " << endl;
    for (i = 0; i < 4; i++)
    {
        cin >> dizi[i];
    }
    cout << "İkinci ismin karakterlerini giriniz: " << endl;
    for (i = 0; i < 4; i++)
    {
        cin >> katar[i];
    }
    katar[4] = '\0';

    cout << "İlk isim: ";
    for (i = 0; i < 4; i++)
    {
        cout << dizi[i];
    }

    cout << "\nİkinci isim: ";
    cout << katar;

    return 0;
}