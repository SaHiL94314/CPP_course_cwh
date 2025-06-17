#include<iostream>
using namespace std;
int sum(int a,int b){
    int c = a+b;
    return c;
}
//function prototype
//int sum(int a,int b); --> Acceptable
//int sum(int a,b); --> not acceptable
//int sum (int, int); --> acceptable

// void g(void); --> Acceptable
void g(); // ---> Acceptable
int multiply(int,int);
int main(){
int num1,num2;
cout<<"Enter first number ";
cin>>num1;
cout<<"Enter second number ";
cin>>num2;
cout<<"The sum is "<<sum(num1,num2)<<endl;
cout<<"The multiply is "<<multiply(num1,num2)<<endl;
g();
    return 0;
}
int multiply(int e ,int f ){
    int g = e*f;
    return g;
}
void g(){
    cout<<"\nHello, Good Morninig";
}