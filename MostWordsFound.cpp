#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = INT_MIN;
        int n = sentences.size();

        for(int i=0; i<n; i++)
        {
            int words = 0;
            string s = sentences[i];
            int m = s.length();
            for(int j=0; j<m; j++)
            {
                if(s[j]==' ') words++;
            }
            maxWords = max(maxWords,words+1);
        }
        return maxWords;
    }
};

int main()
{
	Solution obj;

	vector<string> sentences = {"alice and bob love together","i thing so too","this is great thanks very much"};

	cout<<obj.mostWordsFound(sentences)<<endl;
}