#include <stack>
#include <string>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Pair
{
    public:
    stack<int> sta;
    char sgn;
};
 class Solution
{
public:
    void calcs(char sign, int val, stack<int> &st)
    {
        if (sign == '+')
            st.push(val);
        if (sign == '-')
            st.push(-val);
        if (sign == '*')
        {
            int num = st.top();
            st.pop();
            st.push(val * num);
        }
        if (sign == '/')
        {
            int num = st.top();
            st.pop();
            st.push(num / val);
        }
    }
    int calculate(string s)
    {
        int n = s.size();
        stack<int> st;
        stack<Pair> stpair;
        char sign = '+';
        for (int i = 0; i < n; i++)
        {
            char ch = s[i];

            if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                sign = ch;
            }
            else if (ch >= '0' && ch <= '9')
            {
                int val = 0;
                while (i < n && s[i] >= '0' && s[i] <= '9')
                {
                    val = (val * 10) + (s[i] - '0');
                    i++;
                }
                i--;

                calcs(sign, val, st);
            }
            else if (ch == '(')
            {
                Pair obj;
                obj.sta = st;
                obj.sgn = sign;
                stpair.push(obj);
                while (!st.empty())
                    st.pop();
            }
            else if (ch == ')')
            {
                int val = 0;
                while (!st.empty())
                {
                    val += st.top();
                    st.pop();
                }
                Pair obj2 = stpair.top();
                stpair.pop();
                st = obj2.sta;
                sign = obj2.sgn;
                calcs(sign,val,st);
            }
            else
            {
            }
        }
        int sum = 0;
        while (!st.empty())
        {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};
int main()
{
    Solution sahil;
    string str = "2*(5+5*2)/3+(6/2+8)";
    int ans = sahil.calculate(str);
    cout<<ans;

    return 0;
    
}