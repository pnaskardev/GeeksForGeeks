#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
class Solution
{
     public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
        int n=nums.size();
        pair<int,int>p[n];
        for(int i=0;i<n;i++)
        {
            p[i].first=nums[i];
            p[i].second=i;
        }
        sort(p,p+n);
        vector<bool>visited(n,false);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int old_idx=p[i].second;
            if(i==old_idx||visited[i]==true)
            {
                continue;
            }
            else
            {
                int node=i;
                int cycle=0;
                while(!visited[node])
                {
                    visited[node]=true; 
                    int next_node=p[i].second;
                    node=next_node;
                    cycle++;   
                }
                if(cycle>0)
                {
                    ans+=(cycle-1);
                }
            }
            
        }
        return ans;
	}
};
int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
        Solution ob;
        cout<<ob.minSwaps(nums)<<endl;
    }
    return 0;
}