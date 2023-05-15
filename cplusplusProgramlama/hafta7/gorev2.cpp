#include <iostream>
#include <cstdlib>
using namespace std;

void ucgenalan(double taban, double yukseklik)
{
    double alan = (taban * yukseklik) / 2;
    cout << "ucgenin alanı: " << alan << endl;
}

int main()
{
    ucgenalan(5, 4);
}