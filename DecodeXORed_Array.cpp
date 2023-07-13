#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
       int n = encoded.size();
       vector<int> decoded(n+1); 
       decoded[0] = first;

       for(int i=1; i<=n; i++)
       {
           decoded[i] = decoded[i-1]^encoded[i-1]; 
       }
       return decoded;
    }
};

int main()
{
	Solution obj;

	vector<int> encoded = {1,2,3};
	int first = 1;

	vector<int> decoded = obj.decode(encoded,first);

	for(int value : decoded)
	{
	 	cout<<value<<" ";
	}
}