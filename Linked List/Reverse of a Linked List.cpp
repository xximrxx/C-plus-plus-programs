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
   struct node* ptr
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

void reverse()
{
    struct node *p, *q,*temp;
    int i,j,k,length;
    
    length=lengthoflist();
    i=0;
    j=length-1;
    p=q=root;
    
    while(i<j)
    {
        k=0;
        while(k<j)
        {
            q=q->next;
            k++;
        }
        temp=p->next;
        p->data=q->data;
        q->data=temp;
        i++;
        j--;
    }
    
}
    

int main()
{
   int choice;
        while(1){
               
                
                cout<<"\n Press 1 to create linkedt list i.e., insertion";
                cout<<"\n Press 2 to display linked list elements Display";
                cout<<"\n Press 3 to find the length of linked list";
                cout<<"\n Press 4 to find the reverse of the linked list";
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
                        
                        case 4:         reverse();
                                        break;
                        
                        default:
                                    cout<<"Wrong choice";
                                    exit(0);
                }
        }
    return 0;
}
