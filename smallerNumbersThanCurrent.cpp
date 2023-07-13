#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> smallerNumber(n);

        for(int i=0; i<n; i++)
        {
            int counter = 0;
            for(int j=0; j<n; j++)
            {
                if(i!=j && nums[j]<nums[i]) counter++;
            }
            smallerNumber[i] = counter;
        }
        return smallerNumber;
    }
};

int main()
{
	Solution obj;
	vector<int> nums = {8,1,2,2,3};

	vector<int> answer = obj.smallerNumbersThanCurrent(nums);

	for(int value : answer)
	{
		cout<<value<<" ";
	}
}