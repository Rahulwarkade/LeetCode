#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int leftSum[n];
        int rightSum[n];
        vector<int> answer(n);
        leftSum[0] = rightSum[n-1] = 0;

        for(int i=1; i<n; i++)
        {
            leftSum[i] = nums[i-1] + leftSum[i-1];
        }
        for(int i=n-2; i>=0; i--)
        {
            rightSum[i] = nums[i+1] + rightSum[i+1];
        }

        for(int i=0; i<n; i++)
        {
            answer[i] = abs(leftSum[i]-rightSum[i]);
        }
        return answer;
    }
};

int main()
{
	Solution obj;
	vector<int> nums = {10,4,8,3};

	vector<int> answer = obj.leftRightDifference(nums);

	for(int value : answer)
	{
		cout<<value<<" ";
	}
}