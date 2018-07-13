/*
Write a function taht creates a vector of user-defined size M using the new operator.
*/

#include <iostream>
using namespace std;
int main()
{
  int m; //size of a vector
  int *v;//Defining the pointer variable
  cout<<"Enter the vector size:"<<endl;
  cin>>m;
  v=new int[m]; // pointer-variable= new data-type[size]
  cout<<"To check result insert\t"<<m<<" integer value"<<endl;
  for(int i=0;i<m;i++)
  {
    cin>>v[i];
  }
  cout<<"Given integer value are:"<<endl;
  for(int i=0;i<m;i++)
  {
    if(i==m-1) //i starts from 0
    cout<<v[i];
    else 
    cout<<v[i]<<",";
  }
  cout<<endl;
  return 0;
}