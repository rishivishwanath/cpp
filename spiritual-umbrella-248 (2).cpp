

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
    int x,y,z;
    int ans=0;
    for(int i=0;i<a;i++)
    {
        cin>>x>>y>>z;
        if((x+y+z)>=2)
        {
            ans++;
        }
    }
    cout<<ans;
}
