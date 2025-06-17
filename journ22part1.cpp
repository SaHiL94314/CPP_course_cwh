// strings
#include<iostream>
#include<string> 
using namespace std; 
int main(){
//string name = "Sahil Sinha ";
string name;  
cout<<"Enter Name ";
cin>>name;   // taking input
cout<<"your name is "<<name<<endl;
cout<<name.at(3)<<endl;
cout<<name.length()<<endl;
string s(5, 'N');
cout<<s<<endl;

//taking sentences 
string sent;
cout<<"enter string "<<endl;
getline(cin>>ws, sent);
cout<<"your sentence is "<<sent<<endl; 
cout<<sent.length()<<endl;
    return 0;
}