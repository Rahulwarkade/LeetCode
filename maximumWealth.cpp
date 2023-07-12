#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = INT_MIN;
        int n = accounts.size();

        for(int i=0; i<n; i++)
        {
            int wealth = accumulate(accounts[i].begin(),accounts[i].end(),0);
            maxWealth = max(maxWealth,wealth);
        }
        return maxWealth;
    }
};

int main()
{
	Solution obj;

	vector<vector<int>> accounts = {{1,2,3},{3,2,3}};

	cout<<obj.maximumWealth(accounts)<<endl;
}