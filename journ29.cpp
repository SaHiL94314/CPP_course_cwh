#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created
    Complex(void); // Constructor Declaration
    void printNumber(){
        cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex :: Complex(void) //-----> This is a default constructor as it takes no parameters
{     
    a = 0;
    b = 0;
    //cout<<"Hello World ";
  }
int main(){
 Complex c1,c2,c3;
 c1.printNumber();
 c2.printNumber();
 c3.printNumber();
    return 0;
}