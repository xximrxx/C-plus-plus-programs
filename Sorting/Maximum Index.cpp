#include <bits/stdc++.h>
using namespace std;

int maxIndexDiff(int arr[], int n)
{
    int maxDiff = -1;
    int i, j;

    for (i = 0; i < n; ++i) 
    {
        for (j = n - 1; j > i; --j) 
        {
            if (arr[j] > arr[i] && maxDiff < (j - i))
                maxDiff = j - i;
        }
    }

    return maxDiff;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
      cin>>arr[n];
    }
    int maxDif=maxIndexDiff(arr, n);
    cout<<maxDif;
    return 0;
}
