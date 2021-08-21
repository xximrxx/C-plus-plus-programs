/*
Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
Triplet is 1,4,8
Explanation:
The triplet {1, 4, 8} in 
the array sums up to 13.
*/


#include <iostream>

using namespace std;

int main()
{
    int arr[]={1,3,5,11,7,3,9,12,6,10,16};
    int n=sizeof (arr)/sizeof (arr[0]);
    int target;
    cout<<"Enter targated sum ";
    cin>>target;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==target)
                {
                cout<<"Triplet is "<<arr[i]<<", "<<arr[j]<<", "<<arr[k];
                //else
                //cout<<"Not possible";
                }
            }
        }
    }
    return 0;
}
