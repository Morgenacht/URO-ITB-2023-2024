#include <iostream>
using namespace std;
int main(){
int nilaipertama[10];
// Looping input
for(int i=0;i<10;i++){
cin>>nilaipertama[i];
}
int nilaikedua[10];
// Looping input
for(int j=0;j<10;j++){
cin>>nilaikedua[j];
}
cout<<endl;
// Looping print
for(int i=0;i<10;i++){
cout<<nilaipertama[i]<<" ";
}
cout<<endl;
// Looping untuk Mendapat Total Nilai
int sum = 0;
for(int i=0;i<10;i++){
sum += nilaipertama[i];
}
cout<<sum<<endl; // Jumlah dari nilai berdasar input
}