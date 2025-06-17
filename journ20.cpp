//no code 
// Character Arrays
#include<iostream>
using namespace std;
int main(){
char name[12] = "sahil sinha";
char nam[6] = "sahil";
cout<<name<<endl;
cout<<nam<<endl;
cout<<name[2]<<endl;
 
//Taking input and printing output (words)
//use this syntax when you have one word or sentence without spaces
int n;
cout<<"Enter the size of word ";
cin>>n;
char city[n+1];
cin>>city;
cout<<city;

// Taking input and printing output (word)
int m;
cout<<"Enter the size of word ";
cin>>m;
char arr[m+1];
for(int i = 0; i<m; i++)
{
    cin>>arr[i];
    
}
for(int i = 0;i<m; i++)
{
    cout<<arr[i];
}

    return 0;
}