#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
// A-bes gruba random dg tarihlerini atama
    srand(time(0));
    char harfler[5] = {'A', 'B', 'C', 'D', 'E'};
    int values[5][5];

    int dgTarihi[5] = {2005, 2004, 2003, 2008, 2006};
    for (int i = 0; i < 5; i++)
    {
        cout << harfler[i] << " -- ";
        for (int j = 0; j < 5; j++)
        {
            int randomSayi = 0 + rand() % 5;
            values[i][j] = dgTarihi[randomSayi];
            cout << values[i][j] << " ";
        }
        cout << endl;
    }
}