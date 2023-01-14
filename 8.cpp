#include<bits/stdc++.h>
using namespace std;
vector<int> even_generator(vector<int> &arr)
{
    vector<int> even;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]%2==0)
            even.push_back(arr[i]);
    }
    return even;
}
int main ( )
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    vector<int> even = even_generator(arr);
    for(int i=0; i<even.size(); i++)
    {
        cout<< even[i]<<" ";
    }
}
