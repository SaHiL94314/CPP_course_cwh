#include<iostream>
using namespace std;
typedef union money
{
    int rice;
    char car;
    float pounds;
}rm;
int main(){
union money m1;
m1.rice = 34;
cout<<m1.rice<<endl;


money m2;
m2.car = 's';
cout<<m2.car<<endl;

rm m3;
m3.pounds = 5.56;
cout<<m3.pounds<<endl;
    return 0;
}
