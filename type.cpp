// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("word.in","r",stdin);
    freopen("word.out","w",stdout);
	int a, b; 
    cin >> a >> b;
    vector<string> s;
    string word;
    for (int i = 0; i < a; i++) {
        if (!(cin >> word)) break;
        s.push_back(word);
    }
    int x=b;
    for(int i=0;i<a;i++)
    {
        // cout<<(x-s[i].length());
        if(x<s[i].length())
        {
            cout<<"\n";
            x=b;
            i--;
            continue;
        }
        if(x!=b)
        {
            x-=s[i].length();
            cout<<" "<<s[i];
        }
        else
        {
            x-=s[i].length();
            cout<<s[i];
        }
    }
}
