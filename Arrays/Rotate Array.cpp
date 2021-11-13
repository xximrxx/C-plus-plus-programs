#include<bits/stdc++.h>
using namespace std;

void leftrotatebyone(int arr[], int n)
{
  int temp=arr[0];
  for(int i=0;i<n;i++)
  {
    arr[i]=arr[i+1];
  }
   arr[n-1]=temp;
}

void rotateleft(int arr[], int n, int d)
{
  for(int i=0;i<d;i++)
  {
    leftrotatebyone(arr,n);
  }
}

void display(int arr[], int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  
}

int main()
{
    int n;
  cout<<"Enter size";
  cin>>n;
  
  int arr[n];
  cout<<"Enter array elements ->";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int d;
  cin>>d;
  
  rotateleft(arr, n, d);
  cout<<"Array after rotation -> ";
  display(arr, n);

    return 0;
}
