/*
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.
 

Example 1:

Input:
N = 3 
A[] = {1,2,3} 
Output:
-1
Explanation:
Since, each element in 
{1,2,3} appears only once so there 
is no majority element.
*/

#include<bits/stdc++.h>
using namespace std;

void findMajority(int arr[], int n)
{
  int count=0;
  int index=-1;
  for(int i=0;i<n;i++)
  {
    int c_count=0;
    for(int j=0;j<n;j++)
    {
      if(arr[j]==arr[i])
        count++;
      }
  
    if (count>c_count) 
    {
            c_count=count;
            index=i;
    }
  }
    if (c_count>n/2)
        cout<<arr[index]<<endl;

    else
        cout<<"No Majority Element"<<endl;
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  findMajority(arr,n);
  
  return 0;
}
