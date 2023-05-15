#include <iostream>
using namespace std;

int main() {
  int asalMi=41;
  for(int i=2; i<=asalMi; i++) {
    if(asalMi%i==0) {
        cout<< "Sayi asal degildir."<<endl;
    }
    else {
        cout<<"Sayi asaldir."<< endl;
    }
    return 0;
  }
}