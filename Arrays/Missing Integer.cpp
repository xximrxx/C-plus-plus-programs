#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,4,3,6,2,5,8,7,9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int sum=(n+1)*(n+2)/2;
    for (int i=0;i<n;i++)
        sum=sum-arr[i];
    cout<<"Missing Integer is ";
    cout<<sum;
    
    return 0;
}

/* here we have used the concept of finding the sum of first n+1(size of array+1) numbers, as the one number in between is missing, 
therefore the formula-> n(n+1)/2 has been modified as (n+1)*(n+2)/2, then subtracting each araay element from the sum, at last will be resulting in finding the missing number
*/
