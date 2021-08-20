/*
Input:
arr[] = {1, 5, 7, 1}
Enter the targeted sum 6

Output:Total number of pairs are  2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.
*/

#include <iostream>

using namespace std;

int main()
{
    int arr[]={4,6,0,5,2,1,3,7};
    
    int n=sizeof (arr)/sizeof (arr[0]);
    
    int target,sum=0,count=0;
    cout<<"Enter the targeted sum ";
    cin>>target;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            count++;
        }
    }
    cout<<"Total number of pairs are "<<count;

    return 0;
}
