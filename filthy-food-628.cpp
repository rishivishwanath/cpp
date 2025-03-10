
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int x,k;
        cin>>x>>k;
        if(k%2==0)
        for(int i=1;i<=x;i++)
        {
            if(i!=x-1)
            cout<<x-1<<" ";
            else
            {
                cout<<x<<" ";
            }
        }
        else
        {
            for(int i=1;i<=x;i++)
            if(i!=x)
            cout<<x<<" ";
            else
            {
                cout<<x-1<<" ";
            }
        }
        cout<<"\n";
    }
}
