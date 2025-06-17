#include<iostream>
using namespace std;
class Employee{
    private:
    int a,b,c;
    public :
    int d,e;
    void setData(int a1,int b1,int c1); //declaration
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};
void Employee :: setData(int a1,int b1 ,int c1){
    a =a1;
    b = b1;
    c = c1;
}
int main(){
Employee Sahil;
//Sahil.a = 5 //show error as a is private
Sahil.d =34;
Sahil.e = 89;
Sahil.setData(1,2,4);
Sahil.getData();
//cout <<" value"<<d;// error - not declared in scope
//cout <<" value"<<a; error - not declared in scope
//cout <<" value"<<Sahil.c; show error as c is private

Employee ayush;
ayush.d = 5;
ayush.e = 7;
ayush.setData(4,8,0);
ayush.getData();

    return 0;
}