#include<iostream>
using namespace std;

struct node
{
  int data;
  struct node *next;
}*root=NULL;
  

void append()
{
    struct node *temp;
     temp=(struct node*)malloc(sizeof(structy node));
     cout<<"Enter data value";
     cin>>temp->data;
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

void display()
{
   struct node* ptr
  cout<<"Linked List created is ";
    while (ptr!=NULL)
    {
        cout<<p->data<<"->";
        p=p->next;
    }
}

void makecycle(int pos)
{
    struct node *temp=root;
    struct node *cyclenode; //this will get the node from where we have to create the cycle
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            cyclenode = temp; 
        }
        temp = temp->next;
        count++;
    }
    temp->next = cyclenode; //pointing the next pointer of the last node of list to the node where we want to start the cycle
}
int main()
{
     int choice;
        while(1){
               
                
                cout<<"\n Press 1 to create linkedt list i.e., insertion";
                cout<<"\n Press 2 to display linked list elements Display";
                cout<<"\n Press 3 to make cycle in linked list";
                cout<<"\n Press 4 to detect cycle in linked list";
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
                    
                        case 3:         makecycle(head,4);
                                        break;

                        default:
                                    cout<<"Wrong choice";
                                    exit(0);
                }
        }
    
    return 0;
}
