#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int d,Node* next1){
        data=d;
        next=next1;
    }
    Node(int d){
        data=d;
        next=NULL;
    }
};

Node* insert(Node* &head,int d)
{
    if(head==NULL)
    {
        head=new Node(d);
        return head;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new Node(d);
    return head;
}

void print(Node*head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    Node*head=NULL;
    int n,d,x;
    cin>>n;
    vector<int>arr;

    for(int i=0;i<n;i++)
    {
        cin>>d;
        insert(head,d);
    }
    cin>>x;
    insert(head,x);

    print(head);
    return 0;
}