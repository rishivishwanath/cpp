// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    freopen("promote.in","r",stdin);
    freopen("promote.out", "w", stdout);
	int a[4],b[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i]>>b[i];
    }
    int ans[3];
    ans[2]=b[3]-a[3];
    ans[1]=b[2]-a[2]+ans[2];
    ans[0]=b[1]-a[1]+ans[1];
    for(int i=0;i<3;i++)
    {
        cout<<ans[i]<<"\n";
    }
}

