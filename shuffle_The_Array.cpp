#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m = 2*n;
        vector<int> shufl(m);

        int xi = 0,yi = n,i = 0;
        while(xi<n && yi<m)
        {
            shufl[i++] = nums[xi++];
            shufl[i++] = nums[yi++];
        }
        return shufl;
    }
};
int main()
{
	Solution obj;
	vector<int> nums = {2,5,1,3,4,7};
	int n = 3;
	vector<int> shuffled = obj.shuffle(nums,n);

	for(auto value : shuffled)
	{
		cout<<value<<" ";
	}
}