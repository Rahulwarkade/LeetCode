#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n = nums.size();
        vector<int> decompressed;

        for(int i=0; i+1<n; i+=2)
        {
            int freq = nums[i];
            int val = nums[i+1];
            while(freq--)
            {
                decompressed.emplace_back(val);
            }
        }
        return decompressed;
    }
};


int main()
{
	Solution obj;
	vector<int> nums = {1,2,3,4};

	vector<int> decompressed = obj.decompressRLElist(nums);

	for(int &value : decompressed)
	{
		cout<<value<<" ";
	}
}