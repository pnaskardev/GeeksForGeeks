#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        for (int  i = 0; i <nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto it=mp.cbegin();it!=mp.cend();it++)
        {
            if(it->second>1)
            {
                return it->first;
            }
            
        }
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
        vector<int>nums;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            nums.push_back(temp);
        }
        Solution ob;
        cout<<ob.findDuplicate(nums)<<endl;
    }
}