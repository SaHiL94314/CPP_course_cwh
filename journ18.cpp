#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int fib(int m){
    if(m<2){
        return 1;
    }
    return fib(m-2)+fib(m-1);
}
int main(){
    int a;
cout<<"Enter the value ";
cin>>a;
cout<<"The facorial of "<<a<<" is "<<factorial(a)<<endl;
int x;
cout<<"Enter the value ";
cin>>x;
cout<<"The term in fibonacci sequence at position "<<x<<" is "<<fib(x); 
    return 0;
}