#include <iostream>
using namespace std;
float luas(float r){
float ans = 3.14*r*r;
return ans;
}
int main(){
cout<<luas(3)<<endl;
cout<<luas(5.5)<<endl;
}