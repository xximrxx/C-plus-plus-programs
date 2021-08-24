#include <iostream>

using namespace std;

int main()
{
    char str;
    cout<<"Input a string -> ";
    cin>>str;
    int l=0;
    int h=strlen(str)-1;
    while(h>l)
    {
        if(str[l++]!=str[h--])
        cout<<str<<" is not a palindrome.";
        else
        cout<<str<<" is a palindrome. "
    }
    return 0;
}

/*
Output
Input a string -> abababa
abababa is a palindrome
*/

