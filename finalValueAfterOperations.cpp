#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0,n = operations.size();

        for(int i=0; i<n; i++)
        {
            (operations[i]== "++X" || operations[i] == "X++") ? X++ : X--;
        }
        return X;
    }
};
int main()
{
	Solution obj;

	vector<string> operations = {"--X","X++","X++"};

	cout<<obj.finalValueAfterOperations(operations)<<endl;
}