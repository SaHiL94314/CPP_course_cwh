#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Tell me your age: ";
cin>>age;
cout<<endl;
if ((age<18)&&(age>0)){
    cout<<"You cannot come to my party";
}
else if (age==18){
    cout<<"You are a kid and you will get a kid pass to the party";
}
else if (age<1){
    cout<<"You are not born yet";
}
else {
    cout<<"You can come to my party";
}
    return 0;
}