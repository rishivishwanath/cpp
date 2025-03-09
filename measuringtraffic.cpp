// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
	int a; 
    cin >> a;
    vector<string>event(a);
    vector<int>start(a);
    vector<int>end(a);
    for(int i=0;i<a;i++)
    {
        cin>>event[i]>>start[i]>>end[i];
    }
    int ansl=-10000;
    int ansh=10000;
    for(int i=a-1;i>=0;i--)
    {
        if(event[i]=="on")
        {
            ansl-=end[i];
            ansh-=start[i];
        }
        else if(event[i]=="none")
        {
            ansl=max(ansl,start[i]);
            ansh=min(ansh,end[i]);
        }
        else
        {
            ansl+=start[i];
            ansh+=end[i];
        }
    }
    cout<<ansl<<" "<<ansh<<"\n";
    ansl=-10000;
    ansh=10000;
    for(int i=1;i<a;i++)
    {
        if(event[i]=="on")
        {
            ansl+=start[i];
            ansh+=end[i];
        }
        else if(event[i]=="none")
        {
            ansl=max(ansl,start[i]);
            ansh=min(ansh,end[i]);
        }
        else
        {
            ansl-=end[i];
            ansh-=start[i];
        }
    }
    cout<<ansl<<" "<<ansh;
}
