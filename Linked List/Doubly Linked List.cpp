#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;

}*root=NULL, *prev=NULL, *next=NULL;



// to insert node at the head of linked list
void insertathead(node* &head, int value)
{
    node* n = new node(value);
    n->next = head;
    if(head!=NULL)
    {
        head->prev = n;
    }
    head = n;
}
// to insert nodes in a doubly linked list
void insertattail(node* &head, int value)
{
    node* n = new node(value);
    node *temp = head;
    if(head==NULL)
    {
        insertathead(head,value);
        return;
    }
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
        temp->next = n;
        n->prev = temp;
}
// to print the doubly linked list
void print(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    cout<<"doubly linked list is:\n";
    print(head);
    return 0;

}
