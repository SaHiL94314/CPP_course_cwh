#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;

    int space=n-1;
    int star=1;
    for(int i=0;i<n;i++){
        int count=0;
        while(count<space && space>0){
            cout<<" ";
            count++;
        }
        space--;
        count=0;
        while(count<star){
            cout<<"*";
            count++;
        }
        cout<<endl;
        star+=2;
    }
    return 0;
}
