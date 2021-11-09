#include<bits/stdc++.h>
using namespace std;

int consecutive_ones(int num1)
{
  int count=0;
  while(num1!=0)
  {
    num1=(num1&(num1<<1));
    count++;
  }
  return count;
}

int main()
{
  int num1;
  cin>>num1;
  int ans;
  ans=consecutive_ones(num1);
  cout<<"Maximum consecutive ones are"<<ans;
  return 0;
}

