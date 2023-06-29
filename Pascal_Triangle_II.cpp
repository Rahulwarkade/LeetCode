#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascal;

        for(int i=0; i<=rowIndex; i++)
        {
            vector<int> temp(i+1,0);
            temp[0] = 1;
            temp[i] = 1;
            pascal.push_back(temp);
        }

        for(int i=2; i<=rowIndex; i++)
        {
            for(int j=1; j<i; j++)
            {
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }

        return pascal[rowIndex];
    }
};

int main()
{

    Solution obj;

    vector<int> row = obj.getRow(3);

    for(auto value : row)
        cout<<value<<" ";
}