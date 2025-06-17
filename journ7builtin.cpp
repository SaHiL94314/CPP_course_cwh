#include<iostream>
using namespace std;
int c = 45;
int main(){
int a,b,c ;
cout<<"Enter the value of a:";
cin>>a ;
cout<<endl;
cout<<"Enter the value of b:";
cin>>b;
cout<<endl;
c=a+b;
cout<<"The sum is "<<c <<endl;
cout<<"The sum is "<<a+b <<endl;
cout<<"The global c is "<<::c;

    return 0;
} 