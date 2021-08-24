#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
    cout<<"Input a string -> ";
    cin>>str;
    int start=0,temp=0;
    int end=strlen(str)-1;
    while(end>start)
    {
        if(str[start++]!=str[end--])
        temp=1;
    }
    if(temp==1)
        cout<<str<<" is not a palindrome.";
    else
        cout<<str<<" is a palindrome. ";
    
    return 0;
}

/*
Output
Input a string -> abababa
abababa is a palindrome
*/

