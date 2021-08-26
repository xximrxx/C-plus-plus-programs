#include<iostream>
using namespace std;
int main()
{
  char str[30];
  cout<<"Enter string ";
  cin>>str;
  int size=sizeof (str)/sizeof(str[0]);
  int index=0;
  for(int i=0;i<size;i++)
  {
      int j;
      for(j=0;j<i;j++)
      {
          if(str[i]==str[j])
          break;
      }
      if(j==i)
      str[index++]=str[i];
  }
  cout<<"String without duplicates is ";
      cout<<str;
    return 0;
}

  
  
