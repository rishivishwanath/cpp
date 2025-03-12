// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
    cin >> a;
	while(a--)
    {
        int w;
        cin>>w;
        if(w<=2)
        {
            cout<<-1<<"\n";
            continue;
        }
        else if(w<20)
        {
        int i;
        for(i=w-1;i>w/2;i--)
        {
            int n=i^w;
            if(n<(i+w)&&i<(n+w)&&w<(n+i))
            {
                cout<<i<<"\n";
                break;
            }
        }
        
        if(i<=w/2)
            cout<<-1<<"\n";
        }
        else
        {
            w=w>>1;
            cout<<w+1<<"\n";
        }
    }

}
