/* wrong */

#include <iostream>

using namespace std;

int main()
{
    int arr[]={2,7,11,21,65,91,72,19,40,81};
    int n=sizeof (arr)/sizeof (arr[0]);
    int new_arr[]={2,7,11,72,40};
    int m=sizeof (new_arr)/sizeof (new_arr[0]),temp=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(new_arr[i]==arr[j])
            break;
          
        if(j==m)
        temp=1;
        }
    }
        if(temp==1)
        cout<<"new_arr is not subset of arr";
        else
        cout<<"new_arr is a  subset of arr";    
    return 0;
}

/*
Output
new_arr is a  subset of arr
*/
