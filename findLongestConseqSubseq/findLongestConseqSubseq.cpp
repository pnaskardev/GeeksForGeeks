#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution 
{
    public:
    int findLongestConseqSubseq(int arr[], int n)
    {
        int counter=0;
        set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(s.find(arr[i]-1)==s.end())
            {
                int j=arr[i]+1;
                while(s.find(j)!=s.end())
                {
                    j++;
                }
                counter=max(counter,j-arr[i]);
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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findLongestConseqSubseq(arr,n)<<endl;
    }   
}