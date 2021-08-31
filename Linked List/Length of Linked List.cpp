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

void Display()
{
   struct Node* ptr
  cout<<"Linked List created is ";
    while (ptr!=NULL)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
}
void lengthoflist() 
{
  struct node *temp;
  temp=root;
  int count=0;
  while(temp!=NULL)
  {
    count++;
    temp=temp->next;
  }
  cout<<"Length of Linked List is -> "<<count;
    
}

int main()
{
   int choice;
        while(1){
               
                
                cout<<"\n Press 1 to create linkedt list i.e., insertion";
                cout<<"\n Press 2 to display linked list elements Display";
                cout<<"\n Press 3 to find the length of linked list";
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

                        case 3:         lengthoflist();
                                        break;
                        default:
                                    cout<<"Wrong choice";
                                    exit(0);
                }
        }
    return 0;
}
