#include<iostream>
#include<iomanip>
using namespace std;
int m,n,i,j;
void display( m,n);
int main()
{
  cout<<"Enter the number of rows:\n";
  cin>> m;
  cout<<"Enter the number of columns:\n";
  cin>> n;
  int myarray [m][n];//defining two dimensional array
  cout<<"Enter "<<m*n<<" elements of matrix:\n";
  for( i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
	{
	  cin>>myarray[i][j];
	 
	}
    }
 display (m,n);
  return 0;
}
void display(m,n)
  {
      cout<<"The output matrix is:\n";
    for( i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
	{
	  cout<<myarray[i][j]<<"\t"; 
	 
	}
      cout<<endl;
    }
}

