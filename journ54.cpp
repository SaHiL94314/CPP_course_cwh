// Operator Overloading 
#include<iostream>
using namespace std;
class Complex{
    private:
    int real , imag;
    public:
    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }
    Complex operator+(Complex const &obj){
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void show(){
        cout<<"real: "<<real<<" and imag: "<<imag<<endl;
    }
};
int main(){
    Complex a(4,6),b(3,4),c;
    c = a + b;
    c.show();

    
return 0;
}