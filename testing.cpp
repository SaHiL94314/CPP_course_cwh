#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node * next;
};
int main(){
// node *temp = new node;
// temp = NULL;
// cout<<temp->next<<endl;
//  string s = "sahil";
//  char c = 's';
//  char d = s[0];
//  if(c == d){
//      cout<<"yes";
//  }
// string s = "vmvvvvvzrvvpvdvvvvyfvdvvvvpkvvbvvkvvfkvvvkvbvvnvvomvzvvvdvvvkvvvvvvvvvlvcvilaqvvhoevvlmvhvkvtgwfvvzy";
// char letter = 'v';
// float strsize = s.size();
//         int count = 0;
//         for(int i = 0;i<s.size();i++){
//             if(letter == s[i]){
//                 count++;
//             }
//         }
//          cout<<count<<endl;
//          cout<<strsize<<endl;;
//          float bc = (count/strsize)*100;
//          cout<<bc<<endl;
//          cout<<(int)bc;

//         // cout<<bc<<endl;
        // // cout<<bc;
        // float a = 59.00;
        // int b = (int)bc;
        // cout<<a<<" "<<b<<endl;
        // // cout<<round(a);
        // // float ans = float(count/strsize)*100;
        // // cout<<ans<<endl;

        // // int rans = (int)ans;
        // // cout<< rans;

        // string s = "567";
        // int a = stoi(s);
        // cout<<a<<endl;

        // char c= 5+'0';
        // string s="";
        // s.push_back(c);
        // cout<<s<<endl;
        // string str = "";
        // str += "sahil";
        // str.push_back('a');
        // cout<<str<<endl;
        // vector<string> vec;
        // vec.push_back("hello");
        // vec.push_back(str);
        // for(string s : vec){
        //     cout<<s<<endl;
        // }

        string str = "sahil";
        cout<<str<<endl;
        str.resize(4);
        cout<<str<<endl;
           return 0;
}