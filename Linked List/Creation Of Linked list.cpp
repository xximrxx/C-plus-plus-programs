#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
}*first = NULL;					//Global Pointer //Can be directly accessed and can pass as parameter

void create(int ll[], int n)
{
	int i;
	struct Node *temp;				//temporary node help in creating new node
	struct Node *last;			//pointer to point at last node //helps in adding new node in end of linked list
	
	first = (struct Node *)malloc(sizeof(struct Node));        //creates space for first node in heap
	first->data =ll[0];										  //data part is assigned as first element of the array
	first->next = NULL;										  //next pointer points to NULL only
	last = first;										     //last pointer made to point at first node //helps in linking nodes [V. Imp]
	
	for(i=1; i<n; i++)										//starting from 1 as already 0th element is created
	{
		temp = (struct Node *)malloc(sizeof(struct Node));     //everytime a new space is created in heap for a new node represented by t
		temp->data = ll[i];										//data part is assigned according to array element
		temp->next = NULL;										//everytime the node is created its next points to NULL as there is no node after that
		last->next = temp;										//helps in linking the previous node with the newly created node
		last = temp;											//last refreshes its pointer to the newly created node that will help again in linking a newly created node in next iteration
	}
	
}

void display(struct Node *p)
{
	while(p != NULL)
	{
		cout<< p->data);
		p = p->next;
	}
}

int main()
{
	int ll[] = {3,5,7,10,15};
	
	create(ll,sizeof(A)/sizeof(aa[0]);
	display(first);
	
	return 0;
}
