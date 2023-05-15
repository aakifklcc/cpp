#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
srand(time(0)); // her defasında farklı bir random deger oluşturmayı sağlar
for(int i=0; i<10; i++) {
     cout << 50 + (rand()%50) <<endl;
}
return 0;

}
