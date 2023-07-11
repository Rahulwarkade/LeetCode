#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int m = 2*n;
        vector<int> ans(m);
        int i = 0;
        while(i<m)
        {
            for(int j=0; j<n && i<m; j++)
            {
                ans[i++] = nums[j]; 
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {1,2,1};

    vector<int> ans = obj.getConcatenation(nums);

    for(auto value : ans)
    {
        cout<<value<<" ";
    }
}