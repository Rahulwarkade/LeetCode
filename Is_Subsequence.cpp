#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
      int n = s.size(); 
      int m = t.size();
      if(n==0) return true;
      bool dp[n+1][m+1];
      for(int i=0; i<=n; i++)
      {
          fill(dp[i],dp[i]+m+1,false);
      }
      fill(dp[0],dp[0]+m+1,true);
      dp[0][0] = true;
      
      for(int i=1; i<=n; i++)
      {
          for(int j=1; j<=m; j++)
          {
              if(s.at(i-1) == t.at(j-1))
              {
                  dp[i][j] = dp[i-1][j-1];
              }
              else
              {
                  dp[i][j] = dp[i][j-1];
              }
          }
      }
      return dp[n][m];
    }
};

int main()
{

    Solution obj;

    string s = "abc";
    string t = "ahbgdc";

    cout<<obj.isSubsequence(s,t)<<endl;
}