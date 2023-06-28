#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool divisorGame(int n) {
        if(n==1) return false;
        bool dp[n+1];
        dp[1]= dp[2] = true;
        
        for(int i=3; i<=n; i++)
        {
            if(dp[i-1])
            {
                dp[i] = false;
            }
            else
            {
                dp[i] = true;
            }
        }
        return dp[n];
    }
};

int main()
{
	Solution obj;

	cout<<obj.divisorGame(3)<<endl;
}