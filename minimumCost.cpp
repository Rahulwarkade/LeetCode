#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if(n==1) return cost[0];
        if(n==2) return min(cost[0],cost[1]);
        vector<int> minCost(n+1,0);
        minCost[0] = cost[0];
        minCost[1] = cost[1];

        for(int i=2; i<=n; i++)
        {
            if(i==n)
            minCost[i] = min(minCost[i-1], minCost[i-2]);
            else 
            minCost[i] = cost[i] + min(minCost[i-1], minCost[i-2]);
        }
        return minCost[n];
    }
};

int main()
{
	Solution obj;
	vector<int> cost = {10,15,20};
	cout<<obj.minCostClimbingStairs(cost)<<endl;
}