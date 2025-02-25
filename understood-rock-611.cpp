// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main() {
    freopen("teleport.in","r",stdin);
    freopen("teleport.out", "w", stdout);
	int a, b, c,d; cin >> a >> b >> c>>d;
	int ans;
	ans=abs(min(a,b)-min(c,d))+abs(max(a,b)-max(c,d));
	cout <<(min(ans,abs(a-b)));
}
