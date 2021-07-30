#include<iostream>
#include<bits/stdc++.h>
#define int long long int 
using namespace std;
vector<int> find(int arr[],int n,int x);
int32_t main(void)
{
    int t;
    cin>>t;
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    vector<int>ans;
    ans=find(arr,n,x);
    cout<<ans[0]<<" "<<ans[1]<<endl;

}
int binary(int arr[],int n,int x)
{
    int low =0,high=n-1,mid,first=n ;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(x<=arr[mid])
        {
            first=mid;
            high=mid-1;
        }
        if(x>arr[mid])
        {
            low=mid+1;
        }
    }
    return first;
}
vector<int> find(int arr[],int n,int x)
{
    int ans1=binary(arr,n,x);
    int ans2=binary(arr,n,x+1)-1;
    if(ans1<=ans2)
    {
        return {ans1,ans2};
    }
    else 
    {
        return {-1,-1};
    }
}