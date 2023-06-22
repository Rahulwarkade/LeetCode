#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vac;

        for(int i=0; i<=n; i++)
        {
            int count = 0;
            int bit = i;
            while(bit>0)
            {
                if((bit&1) != 0) count++;
                bit>>=1;
            }
            vac.push_back(count);
        }
        return vac;
    }   
    vector<int> countBitsTab(int n) {
        vector<int> vac(n+1, 0);

        for(int i=1; i<=n; i++)
        {
			vac[i] = vac[i>>1] + (i&1);
        }
        return vac;
    }

};
int main()
{
	Solution obj;

	vector<int> v = obj.countBitsTab(15);

	for(int &value : v)
	{
		cout<<value<<" ";
	}	

}