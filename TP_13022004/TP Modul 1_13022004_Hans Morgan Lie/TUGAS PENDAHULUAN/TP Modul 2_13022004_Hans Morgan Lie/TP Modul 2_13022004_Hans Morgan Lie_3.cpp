#include <iostream>
using namespace std;
int main(){
int a = 10;
int b = 20;
int* pa = &a;
int* pb = &b;
int** ppa = &pa;
int** ppb = &pb;
// Asumsikan address dari a adalah 0x111111
// Asumsikan address dari b adalah 0x222222
// Asumsikan address dari pa adalah 0x333333
// Asumsikan address dari pb adalah 0x444444
cout<<a<<endl;//tampilkan nilai dari a yaitu 10
cout<<&a<<endl;//tampilkan adress nilai dari a yaitu 0x111111
cout<<pb<<endl;//simpan adress dari b yitu 0x222222
cout<<ppa<<endl;//simpan adress dari pa yaitu 0x333333
cout<<*pa<<endl; //nampilkan adress dari pa yaitu 0x333333
cout<<*ppb<<endl; //menampilkan nilai yang tersimpan dari pb yaitu 0x222222
cout<<**ppa<<endl;//menampilkan nilai dari a awal yaitu 10
cout<<*pb * **ppb<<endl;//pengalian dari 20 dari 20 yaitu 400
}
