//POSTMODUL 1 Hans Morgan 13022004 Soal 4
#include <iostream>
using namespace std;
int main()
{
cout << "Tentukan tahun kabisat" << endl;
cout << "Tahun ke-";
int tahun;
cin >> tahun;
    if (tahun%400!=0 && tahun%100 == 0){
        cout << "bukan kabisat";
    }
    else if (tahun%400 == 0 && tahun%100 == 0 && tahun%4 == 0){
        cout << "kabisat";
    }
return 0;
}