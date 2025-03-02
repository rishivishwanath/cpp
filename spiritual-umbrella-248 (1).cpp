

#include <bits/stdc++.h>
using namespace std;

int main() {

    int x,y,z;
    cin>>x>>y>>z;
    z=z*(z+1)/2;
    cout<<((((z*x)-y)>0)?(z*x)-y:0);
}
