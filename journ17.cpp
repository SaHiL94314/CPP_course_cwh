#include<iostream>
using namespace std;
// inline function
inline int product (int a,int b){
    return a*b;
}
// default arguments
float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney*factor;
}
int main(){
int x,y;
cout<<"Enter the value of x and y "<<endl;
cin>>x>>y;
cout<<endl;
cout<<"The product of x and y is "<<product(x,y)<<endl;
cout<<"The product of x and y is "<<product(x,y)<<endl;
cout<<"The product of x and y is "<<product(x,y)<<endl;
cout<<"The product of x and y is "<<product(x,y)<<endl;
cout<<"The product of x and y is "<<product(x,y)<<endl;
cout<<"The product of x and y is "<<product(x,y)<<endl;
cout<<"The product of x and y is "<<product(x,y)<<endl;
cout<<"The product of x and y is "<<product(x,y)<<endl;
cout<<"The product of x and y is "<<product(x,y)<<endl;
cout<<"The product of x and y is "<<product(x,y)<<endl;

//default arguments
int money = 100000;
cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year "<<endl;
cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyReceived(money,1.1)<<" Rs after 1 year "<<endl;

// constant arguments


    return 0;
}