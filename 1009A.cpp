// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
    cin >> a;
	while(a--)
    {
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        if((-w+x)==0&&(-y+z)==0)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
}
