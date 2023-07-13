#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
      int n = nums.size();
      vector<int> target(n);
      fill(target.begin(),target.end(),0);
      for(int i=0; i<n; i++)
      {
          int idx = index[i];
          for(int j=n-1; j>idx; j--)
          {
              target[j] = target[j-1];
          }
          target[idx] = nums[i];
      }  
      return target;
    }
};

int main()
{
	Solution obj;
	vector<int> nums = {0,1,2,3,4};
	vector<int> index = {0,1,2,2,1};

	vector<int> target = obj.createTargetArray(nums,index);

	for(int value : target)
	{
		cout<<value<<" ";
	}
}