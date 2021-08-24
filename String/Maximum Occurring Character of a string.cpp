#include <iostream>
#include<string.h>
using namespace std;

int main()
{ 
    char str[100];
    cout<<"Enter string-> ";
    cin>>str;
    int count[256] = {0}; 

    int len = strlen(str); 
    int max = 0;  // Initialize max count 
    char result;   // Initialize result 
  
    for (int i = 0; i < len; i++) { 
        count[str[i]]++; 
        if (max < count[str[i]]) { 
            max = count[str[i]]; 
            result = str[i]; 
        } 
    } 
    cout<<"maximum occurring character in the input string-> ";
    cout<<result;
    return 0;
}
