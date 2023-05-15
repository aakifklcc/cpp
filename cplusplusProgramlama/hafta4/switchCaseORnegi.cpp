#include <iostream>
using namespace std;
int main()
{
    char islem;
    cin >> islem;
    int a=5;
    int b=4;

    switch (islem)
    {
    case '+':
        cout << "Toplama islemi: "<< a+b;
        break;
    case '-':
        cout << "Cikarma islemi: "<< a-b;
        break;
    case '*':
        cout << "Carpma islemi: "<< a*b;
        break;
    case '/':
        cout << "Bolme islemi: "<< a/b;
        break;
    default:
        cout << "Hatali giris.";
    }
    return 0;
}