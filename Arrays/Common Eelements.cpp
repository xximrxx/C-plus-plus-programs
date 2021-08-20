/*
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output:Common elements in three sorted arrays are  20 80
Explanation: 20 and 80 are the only
common elements in A, B and C.
*/

#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {1,5,10,20,40,80};
    int arr2[] = {6,7,20,80,100};
    int arr3[] = {3,4,15,20,30,70,80,120};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    
    cout<<" Common elements in three sorted arrays are ";
    int i=0,j=0,k=0;
    while( i<n1 && j<n2 && k<n3)
    {
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j])
        i++;
        
        else if(arr2[j]<arr3[k])
        j++;
        
        else
        k++;
        
    }

    return 0;
}
