#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool> greatest(n);
        int greatestElm = *(max_element(candies.begin(),candies.end()));

        for(int i=0; i<n; i++)
        {
            int currCandie = candies[i] + extraCandies;
            (currCandie>=greatestElm) ? greatest[i] = true : greatest[i] = false;
        }
        return greatest;
    }
};

int main()
{
	Solution obj;
	vector<int> candies = {2,3,5,1,3};
	vector<bool> greatest = obj.kidsWithCandies(candies,3);

	for(auto value : greatest)
	{
		cout<<value<<" ";
	}
}