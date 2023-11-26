//TP Modul 3 Soal 1 Hans Morgan 13022004
#include <iostream>
using namespace std;
class LinearLine
{
private:
float x1;
float y1;
float x2;
float y2;
// empat float data type, yaitu x1, y1, x2, dan y2

public:
LinearLine (float x1, float y1, float x2, float y2) {
this -> x1 = x1;
this -> y1 = y1;
this -> x2 = x2;
this -> y2 = y2;
}

float gradient() {
    return (y2-y1)/(x2-x1);

}
float y_intercept() {
    float c;
    c = y1 - gradient()*x1;
    return c;

}
void operator + (float a) {
    int cbaru = y_intercept()+gradient()*a*(-1);
    cout << "y= " << gradient() << "x + " << cbaru << endl; 

}
void printEquation() {
    cout << "y= " << gradient() << "x + " << y_intercept() << endl;

}
void printPoints() {
cout << "(x1,y1) = ";
cout << "(" << x1 << "," << y1 << ")" << endl;
cout << "(x2,y2) = ";
cout << "(" << x2 << "," << y2 << ")" << endl;

} 
};
int main()
{
LinearLine line(1.0f, 8.0f, 2.0f, 3.0f); // inisialisasi objek line
int a = 3; // nilai banyaknya penggeseran pada persamaan linear
line.printPoints();
cout <<"gradient = " << line.gradient() << endl;
cout <<"y_intercept = " << line.y_intercept() << endl;
line.printEquation();
line.operator+(a);

// lengkapilah fungsi main sehingga output program seperti pada contoh di bawah
// (x1, y1) = (1, 8)
// (x2, y2) = (2, 3)
// Sehingga didapatkan
// gradient = -5
// y_intercept = 13
// y = -5 x + 13
// Setelah digeser sejauh a, didapatkan persamaan baru:
// y = -5 x + 28
}