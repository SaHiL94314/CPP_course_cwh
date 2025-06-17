#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    int findCount(vector<int> &nums){
        int n=nums.size();
        int l=0,r=0;
        int count=0;
        while(r<n){
            count+=(r-l+1);
            r++;
        }

        return count;
    }
};
int main(){
solution obj;
vector<int> nums={2,1,3};
cout<<obj.findCount(nums);

    return 0;
}
