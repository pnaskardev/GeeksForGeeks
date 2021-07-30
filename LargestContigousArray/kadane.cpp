#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class solution
{
    public:
    int maxsubarraysum(int a[],int n)
    {
        int maxsum=0,currsum=0;
        for(int i=0;i<n;i++)
        {
            currsum=currsum+a[i];
            if(currsum>maxsum)
            {
                maxsum=currsum;
            }
            if(currsum<0)
            {
                currsum=0;
            }
        }
        return maxsum;
    }
};
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        solution ob;
        cout<<ob.maxsubarraysum(a,n)<<endl;
    }
}