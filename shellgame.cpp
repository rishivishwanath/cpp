// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("shell.in","r",stdin);
    freopen("shell.out","w",stdout);
    int n; 
    cin >> n;
    vector<int>v(3);
    for(int i=0;i<3;i++)
    {
        v[i]=i;
    }
    vector<int>count(3,0);
    for(int i=0;i<n;i++)
    {
        int a, b, g;
		scanf("%d %d %d", &a, &b, &g);
		a--, b--, g--;
        count[a]=count[a]+count[b];
        count[b]=count[a]-count[b];
        count[a]=count[a]-count[b];
        count[g]++;
    }
    cout<<(max({count[0],count[1],count[2]}));
}
