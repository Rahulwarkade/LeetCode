#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       int goodPair = 0;
       int n = nums.size();

       for(int i=0; i<n; i++)
       {
           for(int j=i+1; j<n; j++)
           {
               if(nums[i]==nums[j])
               {
                   goodPair++;
               }
           }
       } 
       return goodPair;
    }
};

int main()
{
	Solution obj;
	vector<int> nums = { 1,2,3,1,1,3};
	cout<<obj.numIdenticalPairs(nums)<<endl;
}