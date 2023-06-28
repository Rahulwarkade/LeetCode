#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int  maxProfit = 0;
        int n = prices.size();
        for(int i=0; i<n; i++)
        {
            int profit = 0;
            if(buy<prices[i])
            {
                profit = prices[i] - buy;
            }
            else
            {
                buy = prices[i];
            }
            maxProfit = max(maxProfit,profit);
        }
        return maxProfit;
    }
};

int main()
{
	Solution obj;
	vector<int> prices = {7,1,5,3,6,4};
	cout<<obj.maxProfit(prices)<<endl;
}