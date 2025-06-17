#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
        double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        long long  m = n;
        if(m<0){
            m = -m;
            x = 1/x;
        }
        double partialAns = myPow(x,m-1);
        return partialAns*x;
    }
int main(){
//     // vector<int> v(4);
//     // // v[3]=1;
//     // // v[4]=4;
//     // // v[5]=5;
//     // v.push_back(5);
//     // for(int val : v){
//     //     cout<<val<<endl;
//     // }
//     // // vector<vector<int>> v;
//     // // cout<<v.size()<<endl;
//     // // v.push_back({});
//     // // cout<<v.size()<<endl;
//     // vector<vector<char>> chessb(4,vector<char> (4,'.'));
//     // for(int i = 0;i<4;i++){
//     //     for(int j = 0;j<4;j++){
//     //         cout<<chessb[i][j];
//     //     }
//     //     cout<<endl;
//     // }
//     // vector<vector<string>> ans;
//     // for(int i = 0;i<4;i++){
//     //     string h;
//     //     for(int j = 0;j<4;j++){
//     //         h += chessb[i][j];
//     //     }
//     //     ans.push_back(h);
//     // }
//     string jp;
//     jp.push_back('1');
//     jp.push_back('2');
//     int b = 934;
//     string cd = to_string(b);
//     char Nij = char(b);
//     cout<<cd;
//    // cout<<Nij<<endl;
//     for(char ch = '1';ch<='9';ch++){
//         jp.push_back(ch);
//     }
//     //cout<<jp;

        // int x = 10;
        // int a ;
        // a = x++;
        // x++;
        // cout<<"value of a is " <<a<<endl;
        // cout<<"value of x is " <<x<<endl;
        // vector<vector<int>> ans(9,vector<int>(4,0));
        // cout<<ans.size()<<endl;
        // cout<<ans[0].size()<<endl;
        // ans.resize(12);
        // ans[0].resize(12);
        // cout<<ans.size()<<endl;
        // cout<<ans[0].size()<<endl;
    // cout<<myPow(0.00001,2147483646);
    int j = 10;
    int a = j++;
    cout<<a<<endl;
    while (a>=0){
        a--;
        j--;
    }
    cout<<a<<endl;
    cout<<j<<endl;
    return 0;
}