#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> runningSum(n);
        runningSum[0] = nums[0];
        for(int i=1; i<n; i++)
        {
            runningSum[i] = runningSum[i-1] + nums[i];
        }
        return runningSum;
    }
};


int main()
{
    Solution obj;

    vector<int> nums = {1,2,3,4,5};
    vector<int> runningSum = obj.runningSum(nums);

    for(auto value : runningSum)
    {
        cout<<value<<" ";
    }
}