/*
Write a program to read the values of a,b and c and display the value of x, where x=a/b-c
Test your program for the following values:
a)a=250,b=85,c=25
b)a=300,b=70,c=70
*/
#include <iostream>
using namespace std;
int main(){
  float a,b,c,x;
  cout<<"enter the value of a,b,c respectively:"<<endl;
  cin>>a>>b>>c;
  if(b==0)
    {
      cout<<"x is infinity"<<endl;
      return-1;
    }
  cout<<"The value of x =a/b-c is \t"<<a/b-c<<endl;
return 0;
}
