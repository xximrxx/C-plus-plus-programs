#include <iostream>
using namespace std;

void permuatation(string str, int l, int r)
{
    if(l==r)
    cout<<str<<endl;
    else
    {
    for(int i=l;i<=r;i++)
    {
        swap(str[l],str[i]);                  //l=0 as initialised above
        permuatation(str,l+1,r);              //using recursion, calling this function again with incremented value of l by 1 each time
        swap(str[l],str[i]);   
    }
    }
}
int main()
{
    string str;
    cout<<"Enter string ";
    cin>>str;
    int l=0;
    int n=str.size();
    int r=n-1;
    cout<<"following are the possible permutations -";
    permuatation(str, l,r);
    return 0;
}
    
