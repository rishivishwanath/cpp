#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long n;
    cin>>n;
    vector<int>ans(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<n-1;i++)
    {
        if(ans[i]!=i+1)
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<n;
    return 0;
}