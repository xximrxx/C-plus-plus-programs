/*
1) Store last element in a variable say x. 
2) Shift all elements one position ahead. 
3) Replace first element of array with x.
*/

# include <iostream>
using namespace std;
 
int main()
{
    int arr[] = {21, 28, 36, 14, 50, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout<<"Given array is "<<endl;
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
 
    int x=arr[n-1];
    for (int i=n-1;i>0;i--)
    arr[i]=arr[i-1];
    arr[0]=x;
 
    cout<<endl<<"Rotated array is "<<endl;
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
 
    return 0;
}

/*
Output:
Given array is 
21, 28, 36, 14, 50, 45
Rotated array is 
45, 21, 28, 36, 14, 50
 
