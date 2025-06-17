#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    string str;
    cin>>str;
    int a,b;
    cin>>a;
    cin>>b;
    cout<<str<<" "<<a<<" "<<b<<endl;
    cout<<str[1]<<endl;
    //checking for invalid
    bool flag=false;
    bool onep=false,zerop=false;
    for(int j=0;j<str.size();j++){
      if(str[j]!=0 && str[j]!=1){
          cout<<j<<endl;
          cout<<str[j]<<endl;
        flag=true;
        break;
      }
      if(str[i]=='0') zerop=true;
      if(str[i]=='1') onep=true;
    }
    if(flag || str.size()==0){
      cout<<"INVALID"<<endl;
      continue;
    }
    if(onep && zerop){
      cout<<a+b<<endl;
      continue;
    }
    else{
      cout<<0<<endl;
      continue;
    }
    
  }
  return 0;
}