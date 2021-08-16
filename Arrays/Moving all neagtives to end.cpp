/*Input : 
n = 8
arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 
1  3  2  11  6  -1  -7  -5*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int temp[n],j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        temp[j++]=arr[i];
        
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        temp[j++]=arr[i];
    }
    cout<<"New array when all negative elements are shifted towards right ens "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }

    return 0;
}
