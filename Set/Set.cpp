#include <iostream>
#include <iterator>
#include <set>
 
using namespace std;
 
int main()
{
    // empty set container
    set<int>s1={ 40,30,60,20,50, 10};
 
  set<int, greater<int> >::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
 
    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());
 
    // print all elements of the set s2
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++) 
    {
        cout << *itr << " ";
    }
    cout << endl;
   return 0;
}





/*Output


The set s1 is : 
60 50 40 30 20 10 

The set s2 after assign from s1 is : 
10 20 30 40 50 60 


*/
