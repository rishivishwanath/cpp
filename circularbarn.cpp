// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("cbarn.in","r",stdin);
    freopen("cbarn.out","w",stdout);
	int a;
    cin >> a;
    int ans=INT_MAX;
    vector<int>num(a);
    for(int i=0;i<a;i++)
    {
        cin>>num[i];
    }
    for(int i=0;i<a;i++)
    {
        int count=0;
        for(int j=0;j<a;j++)
        {
            if(i==j)
            continue;
            count=count+num[j]*((a+(j-i)%a)%a);
        }
        ans=min(ans,count);
    }
	cout << ans;
}
