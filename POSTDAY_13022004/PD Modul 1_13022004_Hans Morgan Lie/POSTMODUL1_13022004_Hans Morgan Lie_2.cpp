//POSTMODUL 1 Hans Morgan 13022004 Soal 2
#include <iostream>
using namespace std;
int main()
{
int a {};
cout << "Jumlah bilangan: ";
cin >> a;
float sumtot = 0;
for (int i = 0; i<a;){
    float sum;
    cout << "bilangan ke-" << i+1 << " ";
    cin >> sum;
    //cout << sum << endl;
    sumtot += sum;
    //cout << sumtot << endl;
    i = i+1;
}
//cout << sumtot << endl;
float rt = sumtot/a;
cout << "RATA-RATA: " << rt << endl;
return 0;
}