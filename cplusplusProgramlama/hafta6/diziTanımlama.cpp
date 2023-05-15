#include <iostream>
#include <cstdlib>
using namespace std;

int main (){

int notlar [3] ; //= {0,1,2,3,4};

for( int i =0; i<4;i++) {
    cout << "Lütfen: "<<i+1<<". öğrencimizin notunu girelim Ayşe Öğretmen \n";
    cin >> notlar [i]  ;

}
    cout << "Notlarınız: ";
	for (int i=0; i<3 ; i++) {

	cout << notlar[i] << ", ";
	}
    cout << " ";
	//cout << notlar[4] << ".";


return 0;
}