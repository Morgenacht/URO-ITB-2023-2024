//TP Modul 3 Soal 2 Hans Morgan 13022004
#include <iostream>
using namespace std;
class Shape
{
protected:
float area;
float keliling;
public:
Shape(float area,float keliling){
this -> area = area;
this -> keliling = keliling;}
// gunakan virtual function
virtual float calculateArea() { return 0; }
virtual float calculateKeliling() { return 0; }
};
class Rectangle:public Shape{
    private:
    float width;
    float length;
    public:
    Rectangle(float width, float length):Shape(area,keliling){
    this -> width = width;
    this -> length = length;
    area = calculateArea();
    keliling = calculateKeliling();
    }

    float calculateArea() {
    return width*length;}

    float calculateKeliling() {
    return 2*(width+length);}

};

// Buatlah class Rectangle sebagai turunan dari class Shape
// {
// deklarasikan member data, (float) width dan (float) length
// Buatlah constructor untuk menginisialisasi member!
// Buatlah calculateArea() 
// Buatlah calculateKeliling()
// };
int main()
{
Rectangle rect (5.0, 4.0);
Shape* shape1 = &rect;
cout <<"Luas areanya adalah " << shape1->calculateArea() << endl;
cout <<"Keliling areanya adalah " << shape1->calculateKeliling() << endl;
// dengan menggunakan pointer shape1, panggillah
 // function calculateArea() dan calculateKeliling() pada class Rectangle
 // PERIKSA HASILNYA BENAR ATAU SALAH? Jika salah maka perbaikilah base class-nya
return 0;
}