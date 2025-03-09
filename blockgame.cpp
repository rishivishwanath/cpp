// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("blocks.in","r",stdin);
    freopen("blocks.out","w",stdout);
	int a; 
    cin >> a;
    vector<int>ans(26,0);
    
    for(int i=0;i<=a;i++)
    {
        string line,s1,s2;
        getline(cin, line);  
        istringstream iss(line); 
        iss >> s1>> s2; 
        vector<int>tempf(26,0);
        vector<int>tempb(26,0);   
        for(int j=0;j<s1.length();j++)
        {
            tempf[s1[j]-'a']++;
        }
        for(int j=0;j<s2.length();j++)
        {
            tempb[s2[j]-'a']++;
        }
        for(int j=0;j<26;j++)
        {
            ans[j]+=max(tempf[j],tempb[j]);
        }
        tempf.resize(26,0);
        tempb.resize(26,0);   
    }
    for(int i=0;i<26;i++)
    {
        cout<<ans[i]<<"\n";
    }
    return 0;
}
