#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp = a;
    a=b;
    b=temp;
}
void swapPointer(int*c, int *d){
    int uemp = *c;
    *c=*d;
    *d=uemp;
}
void swapreference(int &e, int &f){
    int vemp = e;
    e=f;
    f=vemp;
}
int main(){
int x=4,y=5;
// call by value
cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
swap(x,y); //this will not swap x and y
cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
// call by reference using pointers
cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
swapPointer(&x,&y); // this will swap x and y
cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

// call by reference using c++ reference variable
cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
swapreference(x,y); // this will swap x and y
cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;



    return 0;
}