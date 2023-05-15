#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    char b = 'A'; // ASCI degeri 65

    a = a + b; // 65+5
    float c = a + 3.0;

    cout << "a = " << a << endl
         << "b = " << b << endl
         << "c = " << c << endl;

    double d = 3.4;
    double e = d + 2;
    int x = (int)d + 2; // d degeri int degere donusturuldu


    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "x = " << e << endl;


    // kacis dizgileri \n \t  \a \b gibi cok fazla kullanimi sozkunusu
    cout << "\nBu \t cumlede\n\t\t"
            " cok \"fazla\" kacis dizgesi vardir!\n";


    return 0;
}
