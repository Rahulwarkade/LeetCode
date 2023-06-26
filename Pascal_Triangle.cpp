#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;

        for(int i=1; i<=numRows; i++)
        {
            vector<int> temp(i,0);
            temp[0] = 1;
            temp[i-1] = 1;
            pascal.push_back(temp);
        }

        for(int i=2; i<numRows; i++)
        {
            for(int j=1; j<i; j++)
            {
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }

        return pascal;
    }
};

int main()
{
    Solution obj;

    vector<vector<int>> vac = obj.generate(5);

    for(auto vactor : vac)
    {
        for(auto value : vactor)
        {
            cout<<value<<" ";
        }
        cout<<endl;
    }
 
}