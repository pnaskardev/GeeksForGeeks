#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include<set>
class solution
{
    public:
    int doUnion(int a[], int n, int b[], int m) 
    {
        set<int> s;
        int i,j;
        for(i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(int k=0;k<m;k++)
        {
            s.insert(b[k]);
        }
        return s.size();

    }
};
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        solution ob;
        cout<<ob.doUnion(a,n,b,m)<<endl;
    }
}