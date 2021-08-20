/*
Input:
n = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: The first repeating element is 5
Explanation: 
5 is appearing twice
*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n=sizeof (arr)/sizeof (arr[0]);
    int min=-1;
    set<int> myset;
    for(int i=n-1;i>=0;i--)
    {
        if(myset.find(arr[i])!=myset.end())
        min=i;
        else
        myset.insert(arr[i]);
    }
    if(min!=-1)
    cout << "The first repeating element is " << arr[min];
    else
    cout << "There are no repeating elements";

    return 0;
}
