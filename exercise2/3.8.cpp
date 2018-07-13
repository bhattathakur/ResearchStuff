/* Write a program to print a table of values of the function y=e^(-x) for varying from 0 to 10 in steps of 0.1.The table should appear as follows.
Table for Y=EXP[-x]
X   0.1   0.2   0.3   0.4   0.5   0.6   0.7   0.8   0.9
0.0 ..    ..    ..    ..    ..    ..    ..    ..    ..
1.0
.
.
.
9.0
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{ cout<<setw(100)<<"Table for Y=EXP[-X]\n\n\n";
  cout<<setw(5)<<"X"<<setw(6);
  for (float k=0.1;k<1.0;k+=0.1)
  {
    cout<<k<<setw(20);
  }
  cout<<endl;
  cout<<endl;
  for(float j=0.0;j<10;j++)
  {
    cout<<setw(5)<<j<<"\t";
    for(float i=0.1;i<=1.0;i+=0.1)
    {
      cout<<exp(-(i+j))<<setw(20) ;
    }
    cout<<"\n\n";
  }
  return 0;
}