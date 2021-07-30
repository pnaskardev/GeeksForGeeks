#include<iostream>
#include<bits/stdc++.h>
using namespace std;
pair<int,int> minDifference(vector<int> a,vector<int> b)
{
    //Complete this method
   set<int>s1,s2;
   for(int i=0;i<a.size();i++)
   {
       s1.insert(a[i]);
   }
   for(int i=0;i<b.size();i++)
   {
       s2.insert(b[i]);
   }
   
}
int main(void)
{
    vector<int>arr1={23,5,10,17,30};
    vector<int>arr2={26,134,135,14,19};
    auto ans=minDifference(arr1,arr2);
    cout<<ans.first<<","<<ans.second<<endl;
}