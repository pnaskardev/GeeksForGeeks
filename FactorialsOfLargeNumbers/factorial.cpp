#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define max 500
class Solution
{

    public:
    vector<int> factorial(int N)
    {
        vector<int>returnarr;
        int res[max];
        res[0]=1;
        int res_size=1;
        int multiply(void);
        {
            for(int x=2;x<=N;x++)
            {
                int carry=0,product;
                for(int i=0;i<res_size;i++)
                {
                    product=res[i]*x+carry;
                    res[i]=product%10;
                    carry=product/10;
                }
                while(carry)
                {
                    res[res_size]=carry%10;
                    carry=carry/10;
                    res_size++;
                }
            }
        }
        for(int i=res_size-1;i>=0;i--)
        {
            returnarr.push_back(res[i]);
        }
        return returnarr;
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
        Solution ob;
        vector<int>result=ob.factorial(n);
        for(int i=0;i<result.size();i++)
        {
            cout<<result[i];
        }
        cout<<endl;
    }
}