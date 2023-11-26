//POSTMODUL 1 Hans Morgan 13022004 Soal 5
#include <iostream>
using namespace std;
int main()
{
cout << "Input suatu angka bulat: ";
int bil {};
cin >> bil;
int x = 0;
    for (int i = 2; i<bil;){
        if (bil%i == 0){
            x = x+1;
        }
    i=i+1;
    }
//cout << x;
if (x == 0){
    cout << bil << " adalah angka prima";
}
else{
    cout << bil << " bukan angka prima";
}
return 0;
}