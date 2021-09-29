#include<iostream>
using namespace std;
#define CAPACITY 5

int stack[CAPACITY], top=-1;

int main()
{
   int choice;
        while(1){
               
                
                cout<<"\n Press 1 for performing push operation;
                cout<<"\n Press 2 for performing pop operation";
                cout<<"\n Press 3 for peek";
                cout<<"\n Press 4 for traverse";
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

                        case 3:         insertatend();
                                        break;
                        default:
                                    cout<<"Wrong choice";
                                    exit(0);
                }
        }
    return 0;
}
