// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("speeding.in","r",stdin);
    freopen("speeding.out","w",stdout);
    int m,n;
    cin>>m>>n;
    vector<vector<int>>road(m,vector<int>(2));
    vector<vector<int>>cow(n,vector<int>(2));
    for(int i=0;i<m;i++)
    {
        cin>>road[i][0]>>road[i][1];
        if(i!=0)
        road[i][0]+=road[i-1][0];
    }
    for(int i=0;i<n;i++)
    {
        cin>>cow[i][0]>>cow[i][1];
        if(i!=0)
        cow[i][0]+=cow[i-1][0];
    }
    int ans=0;
    int j=0;
    for(int i=0;i<m;i++)
    {
        while((j<n)&&cow[j][0]<=road[i][0])
        {
            if(cow[j][1]>road[i][1])
            {
                ans=max(ans,cow[j][1]-road[i][1]);

            }
            j++;
        }
        if((j==0&&cow[j][0]>road[i][0])||((j<n)&&(cow[j][0]>road[i][0]&&cow[j-1][0]<road[i][0])))
        {
            ans=max(ans,cow[j][1]-road[i][1]);

        }
    }
    cout<<ans;
}
