// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
	vector<int>a;
    for(int i=0;i<7;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    cout<<a[0]<<" "<<a[1]<<" "<<(a[6]-a[0]-a[1]);
}

