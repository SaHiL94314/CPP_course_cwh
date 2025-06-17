#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(int , int ); // Constructor Declaration
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex::Complex(int x,int y)   //----> This is a parameterized constructor as it takes 2 parameters
{ 
    a=x;
    b=y;
}
int main(){
    // Implicit call
Complex d(5,9);
d.printNumber();
// Explicit call
Complex e = Complex(1,6);
e.printNumber();

    return 0;
}