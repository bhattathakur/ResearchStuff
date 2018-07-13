#include<iostream>
using namespace std;
int main()
{
  int i,j;
  cout<<"Enter the number of elements in an array\n";
  cin>>i;
  int myarray[i];
  cout<<"Enter the values you want to put in your array\n";
  for(j=0;j<i;j++)
    {
      cin>>myarray[j];
      
    }
  cout<<"The number you entered are: "<<"{";
  for(j=0;j<i;j++)
    {
      cout<<myarray[j]<<",";



     
     

    }
  cout<<"}";
  return 0;
}
