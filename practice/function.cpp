#include<iostream>
using namespace std;
int max(int a,int b);
int main()
{
  int x,y;
  cout<<"Enter the two different integers \n";
  cin>>x>>y;
  cout<<"For two entered values"<<x <<"&"<<y<<"The greater of two entered value is "<< max (x,y)<<'\n';
  return 0;
}
int max(int a,int b)
{
  if(a>b)
    return a;
  else
    return b;
}
