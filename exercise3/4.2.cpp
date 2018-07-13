#include <iostream>
#include <iomanip>
using namespace std;
void matrixx (int r,int c);
int main()
{
  cout<<"\nEnter the number of rows \n";
  int row;
  cin>>row;
  cout<<"\n Enter the number of columns\n";
  int column;
  cin>>column;
  matrixx(row,column);
  return 0;
}

void matrixx(int r,int c)
{
  int x,y;
  int matrix [x][y]; //Defining the 2D array
  cout<<"\n \nEnter Data for your Matrix"<<r<<"x"<<c<<"\n\n";
  for (int i =0;i<r;i++)
  {
    for(int j=0;j<c;j++)
      {
	cout<<setw(5)<<matrix[i][j];
      }
  }
}

