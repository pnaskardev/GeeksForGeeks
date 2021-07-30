#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int rotated(vector<int> &arr,int key)
{
    int n=arr.size();
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[start]<arr[mid])
        {
            //left
            if(key<=arr[mid] && key>=arr[start])
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        else //(arr[mid]<arr[start]) that means middle is 0,1,2...
        {
            //right
            if(key>=arr[mid]&& key<=arr[end])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
    return -1;
}
int main(void)
{   
    vector<int>arr={4,5,6,7,0,1,2,3};
    int key;
    cin>>key;
    cout<<rotated(arr,key)<<endl;
    
}