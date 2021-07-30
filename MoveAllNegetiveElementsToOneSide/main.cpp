#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
using namespace std;
void partition(int arr[],int l,int r);
int main(void)
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    partition(arr,0,size-1);
}
void partition(int arr[],int l,int r)
{
    int j=0;
    for(int i=l;i<=r;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                swap(arr[i],arr[j]);
            }
            j++;
        }
       
    }
     for(int i=0;i<=r;i++)
    {
        cout<<arr[i]<<" ";
    }

}