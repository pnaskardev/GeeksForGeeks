#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getPairsCount(int arr[], int n, int sum);
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum;
        cin>>sum;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<getPairsCount(arr,n,sum)<<endl;
    }
}
int getPairsCount(int arr[], int n, int sum)
{
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;

    }
    int twice_count=0;
    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<"\t"<<itr->second<<endl;
    }
    for(int i=0;i<n;i++)
    {
        twice_count=twice_count+m[sum-arr[i]];
        if((sum-arr[i])==arr[i])
        {
            twice_count--;
        }
    }
    return twice_count/2;
}