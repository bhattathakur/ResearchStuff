/* Redo Exercise 2.5 using a class called temp and member functions*/

#include<iostream>
using namespace std;

class temp
{
  float F;
public:
  void getdata();
  void display();
};
void temp ::getdata(){
  cout<<"Enter the temperature in Fahrenheit Scale:"<<endl;
  cin>>F;
}
void temp::display()
{
  cout<<"Temperature in Celsius Scale:\t"<< 5*(F-32)/9<<endl;
}

int main(){
temp t;
 t.getdata();
 t.display();

 return 0;
}
