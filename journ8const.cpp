#include<iostream>
using namespace std;
int main(){
int a =5;
a = 7;

cout<<"The value of a was "<<a<<endl;
cout<<"The value of a is "<<a<<endl;

float d = 3.14;
cout<<"The value of d was "<<d<<endl;
d = 6.14;
cout<<"The value of d is "<<d<<endl;

// Constants in C++
const float e = 3.11;
// now if you change the value of e, the compiler show error
cout<<"The value of e is "<<e<<endl;




    return 0;
}