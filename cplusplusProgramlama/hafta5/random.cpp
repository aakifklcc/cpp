#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
    srand(time(0));
    int randomSayi= 5+ rand()%10;

    cout << "Random Sayimiz:"<< randomSayi<<endl;

    return 0;
}

