#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
void count(vector<int> &arr,int target);
int binary(vector<int> &arr,int target);
int32_t main(void)
{
    vector<int>arr={0,1,1,1,1,2,2,2,3,4,4,5,10};
    int target;
    cin>>target;
    count(arr,target);
}
int binary(vector<int> &arr,int target)
{
    int low=0,high=arr.size()-1,first;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(target==arr[mid])
        {
            first=arr[mid];
            high=mid-1;
        }
        else if(target>arr[mid])
        {
            low=mid+1;
        }
        else//if target if smaller than arr[mid];
        {
            high=mid-1;
        }
    }
}
void count(vector<int> &arr,int target)
{
    int ans1=binary(arr,target);
    int ans2=binary(arr,target+1);
    cout<<fabs(ans1-ans2)<<endl;
}