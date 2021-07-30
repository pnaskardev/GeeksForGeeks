#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) 
    {
        //code here
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0,counter=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(mp.find(sum)!=mp.end())
            {
                counter=counter+mp[sum];
                mp[sum]++;
            }
            else 
            {
                mp[sum]++;
            }
        }
        return counter;
    }
};
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>arr(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findSubarray(arr,n)<<endl;
    }
    return 0;
}