#include<iostream>
using namespace std;
int main(){
    int a = 45;
    float b = 45.67; 
    cout<<"The value of a is "<<(float)a<<endl; 
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;

    int c = int(b) ;
    cout<<"The value of c is "<<c<<endl;
    int d = float(a); 
    cout<<"The value of d is "<<d<<endl;
    int e = int (a); 
    cout<<"The value of e is "<<e<<endl;

    return 0;
}