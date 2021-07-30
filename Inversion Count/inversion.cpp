#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long array[],long long l,long long mid,long long r)
    {
	    long long n1=mid-l+1;
	    long long n2=r-mid;
	    long long a[n1],b[n2];
	    for(long long i=0;i<n1;i++)
	    {
		    a[i]=array[l+i];
	    }
	    for(long long i=0;i<n2;i++)
	    {
		    b[i]=array[mid+1+i];
	    }
	    long long i=0,j=0,p=l,count=0;
	    while(i<n1&&j<n2)
	    {
		    if(a[i]<=b[j])
		    {
			    array[p++]=a[i++];
		    }
		    else
		    {
			    array[p++]=b[j++];
                count+=(n1-i);
		    }

	    }
	    while(i<n1)
	    {
		    array[p]=a[i];
		    i++;
		    p++;
	    }
	    while(j<n2)
	    {
		    array[p]=b[j];
		    j++;
		    p++;
	    }
        return count;
}
long long mergesort(long long array[],long long l,long long r)
{
    long long res=0;
    if(l>=r)
    {
        return 0;
    }
    long long mid=(l+r)/2;
	res+=mergesort(array,l,mid);
	res+=mergesort(array,mid+1,r);
	res+=merge(array,l,mid,r);
     return res;
    
}
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergesort(arr,0,N-1);
    }
};
int main(void)
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.inversionCount(arr,n)<<endl;
    }
}