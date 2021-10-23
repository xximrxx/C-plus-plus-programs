#include<bits/stdc++.h>
using namespace std;

int sum(int num1, int num2)
{
  while(num2!=0)
  {
    unsigned carry=num1&num2;
    num1=num1^num2;
    num2=carry<<1;
  }
  return num1;
}
int main()
{
  int num1, num2, ans;
  cout<<"Enter first number:-> ";
  cin>>num1;
  
  cout<<"Enter two number:-> ";
  cin>>num2;
  
  ans=sum(num1, num2);
  cout<<"Sum of two number "<<ans;
  
  return 0;
}

