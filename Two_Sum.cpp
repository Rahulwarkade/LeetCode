#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public :
	    vector<int> twoSum(vector<int>& nums, int target) {
    	vector<int> vac;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
        	for(int j = i+1; j<n; j++)
        	{
        		int sum = nums[i]+nums.at(j);
        		if(sum==target)
        		{
        			vac.emplace_back(i);
        			vac.emplace_back(j);
        			return vac;
        		}
        	}
        }    

    }

    vector<int> twoSumOpt(vector<int>& nums, int target) {
    	vector<int> vac;
    	unordered_map<int,int> mp;
        int n = nums.size();

    	for(int i=0; i<n; i++)
    	{
    		mp.insert({nums[i],i});
    	}
        for(int i=0; i<n; i++)
        {
			int x = target - nums[i];
			if(mp.find(x)!=mp.end())
			{
				int j = mp[x];
				vac.emplace_back(i);
				vac.emplace_back(j);
				return vac;
			}
        }
    }
}

int main()
{
	vector<int> nums;
	nums.emplace_back(2);
	nums.emplace_back(7);
	nums.emplace_back(11);
	nums.emplace_back(15);

	vector<int> v = obj.twoSumOpt(nums,9);

	for(int &value : v)
	{
		cout<<value<<" ";
	}

	return 0;
}