
#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *link;
};

struct node *root=NULL;
root=(struct node *)malloc(sizeof(struct node));

int main()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));

    cout<<"Enter data value";
    cin>>temp->data;

temp->link=NULL;

    if(root==NULL)
    {
        temp=root;
    }
    else{
        struct node *p;
        p=root;
        while(p!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}
