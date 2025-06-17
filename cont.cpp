#include<iostream>
using namespace std;
class Solution {
public:
    int longestString(int x, int y, int z) {
        int prev=-1;
        int len=0;
        while(x>0 || y>0 || z>0){
            if(x>0 && (prev!=1 )){
                len += 2;
                prev=1;
                x--;
            }
            
            if(y>0 && (prev!=2 && prev!=3)){
                len+=2;
                prev=2;
                y--;
            }
            
            if(z>0 && prev!=1){
                len+=2;
                prev=3;
                z--;
            }
        }
        return len;
    }
};
int main(){
    Solution obj1;
    int ans = obj1.longestString(2,5,1);
    cout<<ans<<endl;
    return 0;
}
