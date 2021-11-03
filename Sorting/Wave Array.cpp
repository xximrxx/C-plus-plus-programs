#include<iostream>
#include<algorithm>
using namespace std;

void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void sortInWave(int arr[], int n)
{
    sort(arr, arr+n);
    for(int i=0; i<n-1; i += 2)
        swap(&arr[i], &arr[i+1]);
}

int main()
{
    int n;
    cout<<"Enter size of array-> ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sortInWave(arr, n);
    for (int i=0; i<n; i++)
       cout<<arr[i]<< " ";
    return 0;
}
