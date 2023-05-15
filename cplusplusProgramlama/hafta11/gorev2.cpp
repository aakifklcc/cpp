#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
    srand(time(0));
    int karakterSayisi = 8;
    char sifre[9];
    for (int i = 0; i < karakterSayisi; i++)
    {
        char karakter;
        do
        {
            karakter =65+ rand() % 25;
            cout << karakter << " ";
        } while (isdigit(karakter));
        sifre[i] = karakter;
    }
    sifre[karakterSayisi] = '\0';
    cout << "Sifreniz: " << sifre;
    return 0;
}
