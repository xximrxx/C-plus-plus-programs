/*Sets are a type of associative containers in which each element has to be unique, because the value of the element identifies it.
begin() – Returns an iterator to the first element in the set.
end() – Returns an iterator to the theoretical element that follows last element in the set.
size() – Returns the number of elements in the set.*/

#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter size of array 1";
    cin>>n1;
    cout<<"Enter size of array 2";
    cin>>n2;
    int arr1[n1], arr2[n2];
    cout<<"Enter elements of first array ";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter elements of second array ";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    set<int> s;
    for(int i=0;i<n1;i++)
    s.insert(arr1[i]);
    
    for(int i=0;i<n2;i++)
    s.insert(arr2[i]);
    
    cout<<"Number of elements after union are "<<s.size();
    
    for(auto j=s.begin();j!=s.end();j++)
    cout<<*j;

    return 0;
}
