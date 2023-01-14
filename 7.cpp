#include<bits/stdc++.h>
using namespace std;
int main ( )
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        int p;
        cin>>p;
        arr.push_back(p);
    }
    int x,y;
    cin>>x>>y;
    for(int i=0 ; i<(y-x)+1 ; i++)
    {
        arr.erase(arr.begin() + -1);
    }

    for (int i=0; i<arr.size(); i++)
    {
        cout << arr[i]<<" ";
    }
}
