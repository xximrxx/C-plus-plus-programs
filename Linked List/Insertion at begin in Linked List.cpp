#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;

}*root=NULL;

void append()
{
     struct node *temp; // intializing node first
    
        temp=(struct node*)malloc(sizeof(struct node));
        cin>>temp->data;//node to enter value 
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

void Display()
{
   struct node* ptr
  cout<<"Linked List created is ";
    while (ptr!=NULL)
    {
        cout<<p->data<<"->";
        p=p->next;
    }
}
void insertatbegin() // creating positioin and the value to be inserted 
{
    struct node *temp; // intializing node first
    
        temp=(struct node*)malloc(sizeof(struct node));
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
   int choice;
        while(1){
               
                
                cout<<"\n Press 1 to create linkedt list i.e., insertion";
                cout<<"\n Press 2 to display linked list elements Display";
                cout<<"\n Press 3 to insert an element in linked list at begining";
                cout<<"\n Enter your choice: ";
                cin>>choice;
                switch(choice)
                {
                        case 1:
                                        append();
                                        break;
                        case 2:
                                        display();
                                        break;

                        case 3:         insertatbegin();
                                        break;
                        default:
                                    cout<<"Wrong choice";
                                    exit(0);
                }
        }
    return 0;
}
