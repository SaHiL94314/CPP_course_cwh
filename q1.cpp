#include <iostream>
#include<string>
using namespace std;
class Person{};
void swap(Person psn1, Person psn2){
  Person temp = psn1;
  psn1 = psn2;
  psn2 = temp;
}

int main(){
  // // string st = "abc";
  // // cout<<st<<" -> "<<st.length()<<endl;

  // // string s1 = st.substr(3,6);
  // // cout<<s1<<" -> "<<s1.length()<<endl;

  // // string s2 = "";
  // // cout<<s2<<" -> "<<s2.length()<<endl;

  // int marks[5] = {3,3,4,5,3};
  // // cout<<marks[3]<<endl;
  // // cout<<marks;
  // // for(int i = 0;i<5;i++){
  // //   cout<<"hello"<<endl;
  // //   break;
  //   // for(int j = 0;j<5;j++){
  //   //   cout<<"hi"<<endl;
  //   //   break;
  //   // }
  // // }
  // cout<<marks;
    string str;
        for(int i=0;i<(6);i++){
            str+='0';
        }
        cout<<str;
}