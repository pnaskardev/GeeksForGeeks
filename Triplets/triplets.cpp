#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
void solve()
{
    vector<int>arr;
    vector<vector<int>>result;
    int n,target;
    cin>>n>>target;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    sort(arr.begin(),arr.end());
    int sum=0;
    for(int i=0;i<arr.size()-2;i++)
    {
        int j=i+1,k=arr.size()-1;
        while(j<k)
        {
            sum=arr[i]+arr[j]+arr[k];
            if(sum==target)
            {
                j++;
                k--;
                result.push_back({arr[i],arr[j],arr[k]});
            }
            else if(sum<target)
            {
                j++;
            }
            else if(sum>target)
            {
                k--;
            }
        }
    }
    for(auto v:result)
    {
        for(auto no:v)
        {
            cout<<no<<" ";
        }
        cout<<endl;
    }
}