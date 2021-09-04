#include<iostream>
using namespace std;

void reverse(string str)
{
    if(str.size() == 0)
    {
        return;
    }
   cout<<"Reversed String is ->";
   for(int i=str.length()-1; i>=0; i--)
    cout << str[i];
}
 
int main()
{
    string str;
    cout<<"Enter a string ->";
    cin>>str;
    reverse(str);
    return 0;
}

/*
OUTPUT
Enter a string -> start
Reversed String is -> trats
