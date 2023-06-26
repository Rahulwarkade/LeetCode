#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> parentheses = {{'{',1},{'[',2},{'(',3},{'}',-1},{']',-2},{')',-3}};

        stack<char> st;
        for(int i=0; i<s.size(); i++)
        {
            if(parentheses[s.at(i)]>0)
            {
                st.push(s.at(i));
            }
            else
            {
                if(!st.empty()&& parentheses[st.top()]+ parentheses[s.at(i)]==0)
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        bool isValid = (!st.empty()) ? false : true;
        return isValid;
    }
};

int main()
{
    Solution obj;
    string str = "()";

    cout<<obj.isValid(str)<<endl;

}