#include <bits/stdc++.h>
using namespace std;

int countMatching(vector<int> arr, int b, int e, int target)
{
    int m = (b+e)/2;

    if(e-b<2)
    {
        int count = 0;
        if(arr[b] == target)
        {
            count++;
        }
        if(arr[e] == target && b!=e)
        {
            count++;
        }
        return count;
    }
    else if(arr[m] > target)
    {
        return countMatching(arr,b,m-1, target);
    }
    else if(arr[m] < target)
    {
        return countMatching(arr, m+1, e, target);
    }
    else
    {
        return countMatching(arr, b, m-1, target) + 1
               + countMatching(arr, m+1, e, target);
    }
}


int main()
{
    int n;
    cin>>n;
    vector<int> ary(n);
    for(int i=0; i<n; i++)
    {
        cin>>ary[i];
    }
    int terget;
    cin>>terget;
    if(countMatching(ary,0,ary.size(),terget)>1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
