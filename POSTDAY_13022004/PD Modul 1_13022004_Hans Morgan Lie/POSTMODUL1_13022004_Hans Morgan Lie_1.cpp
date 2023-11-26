//POSTMODUL 1 Hans Morgan 13022004 Soal 1
#include <iostream>
using namespace std;
int main()
{
int a {};
int b {};
cin >> a >> b;
  for (int i = a; a < b; a++) {
    if (i%2 == 0){
        cout << i << " ";
    }
    i = i+1;
  }
return 0;
}