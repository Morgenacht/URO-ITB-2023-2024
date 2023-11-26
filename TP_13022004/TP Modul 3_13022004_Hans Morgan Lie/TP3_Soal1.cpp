#include <iostream>
class LinearLine
{
private:
std::float x1;
std::float y1;
std::float x2;
std::float y2;
// empat float data type, yaitu x1, y1, x2, dan y2

public:
LinearLine (float x1, float y1, float x2, float y2) {
this -> x1 = x1
this -> y1 = y1
this -> x2 = x2
this -> y2 = y2
}

float gradient() {
    return (y2-y1)/(x2-x1);
// hitunglah gradient berdasarkan 4 titik tersebut
}
float y_intercept() {
    return c = y1 - gradient*x1
// hitunglah nilai y ketika x = 0
}
void operator + (float a) {
    return 
// Buatlah operator overloading untuk menggeser garis linear
// sejauh a pada arah sumbu x
}
void printEquation() {
// print equation dengan format y = mx+c
// perhatikan m = gradient dan c = y_intercept
}
void printPoints() {
// print nilai member data dengan format
// (x1, y1) = ( , )
// (x2, y2) = ( , )
} 
};
int main()
{
LinearLine line(1.0f, 8.0f, 2.0f, 3.0f); // inisialisasi objek line
int a = 3; // nilai banyaknya penggeseran pada persamaan linear
/*
lengkapilah fungsi main sehingga output program seperti pada contoh di bawah
(x1, y1) = (1, 8)
(x2, y2) = (2, 3)
Sehingga didapatkan
gradient = -5
y_intercept = 13
y = -5 x + 13
Setelah digeser sejauh a, didapatkan persamaan baru:
y = -5 x + 28
*/
}