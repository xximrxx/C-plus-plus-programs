#include<bits/stdc++.h>
using namespace std;

void bit(int num1, int k)
{
  if(num1 &(1 << (k-1)))
    cout<<"Set, i.e., kth bit is 1";
  else
    cout<<"Not Set, i.e., kth bit is not 1";
}
int main()
{
  int num;
  cout<<"Enter the number-> ";
  cin>>num;
  int k;
  cout<<"Enter the position-> ";
  cin>>k;
  bit(num,k);
  return 0;
}
  
