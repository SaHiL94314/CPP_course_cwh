#include<iostream>
using namespace std;
int main(){
// int a = 4;
// int *p = &a;
// cout<<"The address of a is "<<p<<endl;
// cout<<"The value at address p is "<<*p<<endl;

int Marks [4] = {3 , 4 , 5 , 6};
int *ptr = Marks;
cout<<"The value of Marks[0] "<<Marks[0]<<endl;
ptr[0] = 88;
cout<<"The value of Marks[0] "<<Marks[0]<<endl;
*ptr = 77;
*(ptr + 1) = 99;
cout<<"The value of Marks[0] "<<Marks[0]<<endl;
cout<<"The value of Marks[0] "<<*ptr<<endl;
cout<<"The value of Marks[1] "<<Marks[1]<<endl;
cout<<"The value of Marks[1] "<<*(ptr + 1)<<endl;
cout<<"The value of Marks[2] "<<ptr[2]<<endl;
    return 0;
}