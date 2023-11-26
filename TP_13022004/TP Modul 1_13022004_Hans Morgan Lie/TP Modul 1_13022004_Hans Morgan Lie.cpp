//URO TP Modul 1 Hans Morgan Lie 13022004
#include <iostream>
using namespace std;
int main()
{
string pesawat {};
while (!(pesawat == "o")){
    cin >> pesawat;
    if (pesawat == "a"){
        for(int i = 3; i > 0; i--){
        printf("Hitungan ke-%i\n", i);
    }
        cout << "PESAWAT A BERANGKAT" << '\n';
    }else if (pesawat =="b"){
        for(int i = 5; i > 0; i--){
        printf("Hitungan ke-%i\n", i);
    }
        cout << "PESAWAT B BERANGKAT" << '\n';
    }else if (!(pesawat == "o")){
        cout << "INPUT TIDAK VALID" << '\n';
    }
}
cout << "PENERBANGAN DITUTUP";
return 0;
}