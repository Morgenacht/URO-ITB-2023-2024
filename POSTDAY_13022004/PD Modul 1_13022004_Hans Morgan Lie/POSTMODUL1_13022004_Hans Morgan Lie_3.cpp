//POSTMODUL 1 Hans Morgan 13022004 Soal 3
#include <iostream>
using namespace std;
int main()
{
int bintang {};
cin >> bintang;
    for (int i = 1; i<=bintang;){
        for (int j=0; j<i;){
            cout << "*";
            j=j+1;
        }
    i = i+1;
    cout << endl;
    }
    for (int k = bintang-1; k>=1;){
        for (int l=k; l>0;){
            cout << "*";
            l=l-1;
        }   
    k = k-1;
    cout << endl;
    }
return 0;
}