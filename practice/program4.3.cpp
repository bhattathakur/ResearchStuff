#include <iostream>
using namespace std;
long fact(int n)
{
  if(n==0)
  return 1;
  return (n*fact(n-1));
}
int main()
{
  int num;
  cout<<"Enter a positive integer:";
  cin>>num;
  cout<<"Factorial of \t"<<num<<" is\t"<<fact(num);
  cout<<endl;
  return 0;
}