#include<iostream>
using namespace std;
typedef struct employee{
    int eId;
    char favchar;
    float salary;
}ep;
int main(){
    struct employee sahil;
    sahil.eId = 1;
    sahil.favchar = 's';
    sahil.salary = 1000000000;
cout<<"The eId of sahil is "<<sahil.eId<<endl;
cout<<"The favChar of sahil is "<<sahil.favchar<<endl;
cout<<"The salary of sahil is "<<sahil.salary<<endl;

    employee shalini;
    shalini.eId = 2;
    shalini.favchar = 's';
    shalini.salary = 1000000000;
cout<<"The eId of shalini is "<<shalini.eId<<endl;
cout<<"The favChar of shalini is "<<shalini.favchar<<endl;
cout<<"The salary of shalini is "<<shalini.salary<<endl;


    ep ayush;
    ayush.eId = 3;
    ayush.favchar = 's';
    ayush.salary = 100000000;
cout<<"The eId of ayush is "<<ayush.eId<<endl;
cout<<"The favChar of ayush is "<<ayush.favchar<<endl;
cout<<"The salary of ayush is "<<ayush.salary<<endl;

    return 0;
}