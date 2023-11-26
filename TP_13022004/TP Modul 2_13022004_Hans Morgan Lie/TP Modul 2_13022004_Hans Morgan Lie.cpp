//TP MODUL 2 Hans Morgan 130220004 Soal 1
#include <iostream>
using namespace std;
int main(){
int nilaipertama[10];
for(int i=0;i<10;i++){
cin>>nilaipertama[i];
}
int nilaikedua[10];
for(int j=0;j<10;j++){
cin>>nilaikedua[j];
}
for(int x=0;x<10;x++){
cout<<nilaipertama[x]+nilaikedua[x]<< " ";
}
}