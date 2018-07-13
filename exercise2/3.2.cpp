#include <iostream>
using namespace std;
const int null=0;
void memory(int);
int main()
{
  cout<<"Enter the memory M you want to create:-";
  int size;
  cin>>size;
  memory(size);
  return 0;
}
//Creating a function
void memory(int s)
{
  int *m= new int[s];
  if(m!=null)
  {
    cout<<"\n We are successful.\n";
    cout<<"\n If you want to delete the created memory press Y or y:\n";
    cout<<"\n If you don't want to delete your memory press any other alphabet:\n";
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
      delete[]m;
      cout<<"\n Created memory is deleted\n";
    }
    else
    cout<<"\n Your memory is safe.\n\n";
  }
  else
  cout<<"\n We are unsuccessful.\n";
}