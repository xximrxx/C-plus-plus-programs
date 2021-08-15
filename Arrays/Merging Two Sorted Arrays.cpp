#include <iostream>

using namespace std;

int main()
{
    int arr1[]={5,8,9,12};
    int arr2[]={1,3,6,13,20};
    
    int n1=sizeof (arr1)/sizeof (arr1[0]);
    int n2=sizeof (arr2)/sizeof (arr2[0]);
    
    int n3=n1+n2;
    int arr3[n3];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    if(i<n1)
    {
        while(i<n1)
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
    }
    if(j<n2)
    {
        while(j<n2)
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    for(k=0;k<n3;k++)
    {
        cout<< arr3[k]<<" ";
        
    }
    

    return 0;
}
