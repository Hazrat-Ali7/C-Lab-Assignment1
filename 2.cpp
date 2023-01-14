#include<bits/stdc++.h>
using namespace std;
int main ( )
{
    int n;
    cin>>n;
    vector<int>p(n+1);
    int k;
    for(int i=1; i<n; i++)
    {
        cin >> k;
        p[k]=1;
    }
    for(int i=1; i<=n; i++)
    {
        if(p[i]==0)
            cout<<i<<endl;
    }
}
