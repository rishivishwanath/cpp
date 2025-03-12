// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a; cin >> a;
    while(a--)
    {
        int x;
        cin>>x;
        vector<int>nums(x);
        for(int i=0;i<x;i++)
        {
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        if(x==1)
        {
            cout<<nums[0]<<"\n";
        }
        else
        {
        int sum=0;
        for(int i=0;i<x-1;i++)
        {
            sum=nums[i]+nums[i+1]-1;
            nums[i+1]=sum;
        }
        cout<<nums[x-1]<<"\n";
        }
    }
}
