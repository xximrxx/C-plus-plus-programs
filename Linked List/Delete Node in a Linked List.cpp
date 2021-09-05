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

int length()
{
  struct node *temp;
  temp=root;
  
  int count=0;
  while(temp!=NULL)
  {
    count++;
    temp=temp->next;
  }
  return count;
}

void delete()
{
  struct node *temp;
  int loc;
  cout<<"Enter location to delete ";
  cin>>loc;
  if(loc>length())
  {
    cout<<"Invalid Location ";
  }
  else if (loc==1)
  {
    temp=root;
    root=temp->next;
    temp->next=NULL;
    free(temp);
  }
  else
  {
    struct node *p=root;
    int i=1;
    while(i<loc-1)
    {
      p=p->next;
      i++;
      struct node *q;
      q=p>next;
      p->next=q->next;
      q->next=NULL;
      free(q);
    }
  }

int main()
{
   int choice,len;;
        while(1){
               
                
                cout<<"\n Press 1 to create linkedt list i.e., insertion";
                cout<<"\n Press 2 to display linked list elements Display";
                cout<<"\n Press 3 to find length of linked list";
                cout<<"\n Press 4 to delete an element from linked list";
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
                    
                        case 3:         len=length();
                                        cout<<"Length of Linked Lost is -> "<<len;
                                        break;

                        case 4:         delete();
                                        break;
                    
                        default:
                                    cout<<"Wrong choice";
                                    exit(0);
                }
        }
    return 0;
}
