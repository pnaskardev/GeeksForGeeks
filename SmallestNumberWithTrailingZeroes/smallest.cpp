#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countz(int n)
{
    if (n < 0) // Negative Number Edge Case
    {
        return -1;
    }
    // Initialize result
    int count = 0;
 
    // Keep dividing n by powers of
    // 5 and update count
    for (int i = 5; n / i >= 1; i *= 5)
    {
         count += n / i;
    }
    return count;
}
class Solution
{
    public:
        int findNum(int n)
        {
            //complete the function here
            int ans=-1;
            int low=0,high=10000;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(countz(mid)>=n)
                {
                    high=mid-1;
                    ans=mid;
                }
                else
                {
                    low=mid+1;
                }
            }
            return ans;
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
        Solution ob;
        cout<<ob.findNum(n)<<endl;
    }
}