#include <iostream>
#include <cstdlib>
using namespace std;

int en_buyuk(int dizi[5])
{
  int enbuyuk = dizi[0];

  for (int i = 1; i < 5; i++)
  {
    if (enbuyuk < dizi[i])
    {

      enbuyuk = dizi[i];
    }
  }
  return enbuyuk;
}

int main()
{
  int dizi1[] = {2, 3, 5, 2, 7};
  int dizi2[] = {3, 4, 7, 23, 78};

  int dizi1max = en_buyuk(dizi1);
  cout << " dizibirdeki en buyuk deger: " << dizi1max << endl;

  int dizi2max = en_buyuk(dizi2);
  cout << " diziikideki en buyuk deger: " << dizi2max << endl;

  int toplam = dizi1max + dizi2max;
  cout << "en büyükd degerler toplamı: " << toplam << endl;
}