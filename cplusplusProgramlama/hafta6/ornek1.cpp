#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   int meyve[4] = {1, 2, 3, 4};
   int notlar[4][2] = {{95, 96}, {45, 78}, {45, 76}, {87, 78}};

   for (int i = 0; i < 4; i++)
   {
      cout << meyve[i] << endl;
   }
   cout << "ilk not: " << notlar[0][0] << endl;

   return 0;
}