#include<iostream>
using namespace std;
int main(){
for(int i = 0;i<30;++i){
cout<<i<<endl;
if(i==2){
    continue;
}
}
for(int i =0;i<30;++i){
if(i==2){
    continue;
}
cout<<i<<endl;
}
    return 0;
} 