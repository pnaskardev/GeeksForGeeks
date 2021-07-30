#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) 
    {
	    // code here
        int i=n-1,j=0;
        while(i>=0 && j<m /*&& (arr2[j]<arr1[i])*/)
        {
            if(arr2[j]<arr1[i])
            {
                swap(arr2[j++],arr1[i--]);
            }
            else
            {
                i--;
            }
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
	}
}; 
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i;
        cin>>n>>m;
        int arr1[n],arr2[m];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>arr2[i];
        }
        Solution ob;
        ob.merge(arr1,arr2,n,m);
    }
}