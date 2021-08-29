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
        cout<<p->data<<"->";
        p=p->next;
    }
}
void insertatmiddle()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        cout<<"\n Enter the value ->" ;
        cin>>temp->data;
        temp->next =NULL;
        if(root==NULL)
        {
                root=temp;
        }
        else
        {
                ptr=root;
                int len=0;
                while(ptr!=NULL)
                {
                        len++;
                        ptr=ptr->next ;
                }
   int count=((len%2)==0)?(len/2):(len+1)/2;
          ptr=root;
          
          while(count-- >1)
          {
            ptr=ptr->next;
            temp->next=ptr->next;
            ptr->next=temp;
        }
}

int main()
{
   int choice;
        while(1){
               
                
                cout<<"\n Press 1 to create linkedt list i.e., insertion";
                cout<<"\n Press 2 to display linked list elements Display";
                cout<<"\n Press 3 to insert an element in linked list at position";
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

                        case 3:         insertatmiddle();
                                        break;
                        default:
                                    cout<<"Wrong choice";
                                    exit(0);
                }
        }
    return 0;
}
