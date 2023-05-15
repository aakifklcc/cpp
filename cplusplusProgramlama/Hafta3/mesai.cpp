#include <iostream>
using namespace std;

int main(){
	
	int ucret = 5;
	int saat;
	
	cout << "Kaç saat çalıtığınızı girin: ";
	cin >> saat;

    if (saat < 0){
		cout << "Hatalı bir saat dilimi girdiniz.";
	}
	
	else if (saat < 100){
		ucret = ucret * saat;
		cout << "Ucretiniz: " << ucret;
	}
	
	else if (saat <= 250){
		ucret = (ucret * saat) * 2 ;
		cout << "Ucretiniz: " << ucret;
	}
	
	else{
		ucret = (ucret * saat) * 3 ;
		cout << "Ucretiniz: " << ucret;
	}


}