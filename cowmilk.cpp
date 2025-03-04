// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("mixmilk.in","r",stdin);
    freopen("mixmilk.out","w",stdout);
    vector<int>cap(3);
    vector<int>hold(3);
    for(int i=0;i<3;i++)
    {
        cin>>cap[i]>>hold[i];
    }
    for(int i=1;i<101;i++)
    {
        int x=hold[i%3];
        hold[i%3]=min(cap[i%3],hold[i%3]+hold[(i-1)%3]);
        hold[(i-1)%3]=max(0,(x+hold[(i-1)%3]-cap[i%3]));
    }
    for(int i:hold)
    cout<<i<<"\n";
}
