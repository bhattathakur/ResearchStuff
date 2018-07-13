/*3.4) Write a program to evaluate the following investment equation
V=P(1+r)^n
and print the tables which would give the value of V for various combination of the following values of P,r and n:
P:1000,2000,3000,........,10,000
r:0.10,0.11,0.12,....,0.20
n:1,2,3,.....,10;
Hint: P is principal amount and V is the value of money at the end of n years. The equation can be recursively written as 
V=P(1+r)
P=V
In other words, the value of money at the end of the first year becomes the prinicpal amount for the next year, and so on.
*/

# include <iostream>
#include <cmath> //for pow
#include <iomanip> //for setw
using namespace std;
int main()
{
  int P=1000,n=1,i;
  float r=0.10,V;
  cout<<"\n";
  //for display of P
  cout<<setw(10)<<"P:";
  for(int i=1;i<=10;i++)
  {
    cout<<setw(10)<<P<<"\t";
    P=P+1000;
  }
  cout<<"\n";
  //for display of r
  cout<<setw(10)<<"r:";
  for(i=1;i<=10;i++)
  {
    cout<<setw(10)<<r<<"\t";
    r=r+0.01;
  }
  cout<<"\n";
  //for display of n
  cout<<setw(10)<<"n:";
  for(i=1;i<=10;i++)
  {
    cout<<setw(10)<<n<<"\t";
    n=n+1;
  }
  //for the calculation of V
  P=1000;
  r=0.01;
  n=1;
  cout<<"\n";
  cout<<setw(10)<<"V:";
  for(i=1;i<=10;i++)
  {
    V=P*pow(1+r,n);
    cout<<setw(10)<<V<<"\t";
    P=P+1000;
    r=r+0.01;
    n=n+1;
  }
  return 0;
}
