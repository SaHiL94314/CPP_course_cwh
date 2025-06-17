#include<iostream>
using namespace std;
int main(){
for(int i = 0;i<40;i++){
    
    if(i==2){
        break;
    }
    cout<<i<<endl;
}
for(int i = 0;i<30;i++){
cout<<i<<endl;
if(i==2){
    break;
}
}
    return 0;
}