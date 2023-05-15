#include <iostream>
using namespace std;
// Ekrana 10 kez deneyap ardından 2 kez “Merhaba!” yazan ekrana_yaz isimli bir fonksiyon yazalım
void ekrana_yaz()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Deneyap" << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "Merhaba!" << endl;
    }
}
int main()
{
    ekrana_yaz();
}
