#include<iostream>
using namespace std;
int main(){
//int a = 45; /* this also work*/
//int &b = a;
//int & c = b;
//cout<<a<<endl;
//cout<<b<<endl;
//cout<<c<<endl;

float x = 455;
float &y = x;
float & z = x;
cout<<x<<endl;
cout<<y<<endl;
cout<<z<<endl;
    return 0; 
}