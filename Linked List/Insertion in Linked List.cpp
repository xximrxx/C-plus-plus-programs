#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;

}*root=NULL;

void append()
{
     struct Node *temp; // intializing node first
    
        temp=(struct Node*)malloc(sizeof(struct Node));
        cin<<temp->data;//node to enter value 
        temp->next=NULL; 
         if(root==NULL)
         {
           root=temp;
         }
         else
         {
           struct node *p;
           p=root;
           while(p!=NULL)
           {
             p=p->next;
           }
           p->next=temp;
         }

}

void Display(struct Node* ptr)
{
  cout<<"Linked List created is ";
    while (ptr!=NULL)
    {
        cout<<p->data<<"->";
        p=p->next;
    }
}
void insertatbegin() // creating positioin and the value to be inserted 
{
    struct Node *temp; // intializing node first
    
        temp=(struct Node*)malloc(sizeof(struct Node));
        cin<<temp->data;//node to enter value 
        temp->next=NULL; 
       if(root==NULL)
       {
         root=temp;
       }
  else
  {
    temp->next=root;
    root=temp;
    }
}

int main()
{
   
    return 0;
}
