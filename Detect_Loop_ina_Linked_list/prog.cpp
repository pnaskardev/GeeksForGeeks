#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
///// Only this much is needed
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        unordered_set<Node*>mp;
        Node *p=head;
        while(p!=NULL)
        {
            if(mp.find(p)!=mp.end())
            {
                return true;
            }
            else
            {
                mp.insert(p);
                p=p->next;
            }
        }
        return false;
    }
};
///////
void create(Node *&first, Node *&rear, vector<int>arr);
void display(Node *&first, Node *&rear);
int main(void)
{
    Node *first=NULL,*rear=NULL;
    vector<int>arr={10,20,30,40,50,60};
    create(first,rear,arr);
    display(first,rear);
}
void create(Node *&first,Node*&rear,vector<int>arr)
{
    first=new Node();
    first->data=arr[0];
    first->next=NULL;
    rear=first;
    Node *temp;
    for(int i=1;i<arr.size();i++)
    {
        temp=new Node();
        temp->data=arr[i];
        temp->next=NULL;
        rear->next=temp;
        rear=temp;
    }
}
void display(Node *&first, Node *&rear)
{
    Node *p;
    p=first;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}


