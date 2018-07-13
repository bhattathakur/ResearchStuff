#include <iostream>
#include <cmath>
const float PI=3.1415;
using namespace std;
//function to define factorial
double fact(int n)
{
  if(n<=1)
  return 1;
  else
  return (n*fact(n-1));
}
int main()
{
  float angle_degree;
  float ans=1;
  float temp;
  cout<<"Enter the value of cosine in degrees:"<<endl;
  cin>>angle_degree;
  cout<<"Corresponding angle in radian:"<<endl;
  float angle_radian=angle_degree*PI/180;
  cout<<angle_radian<<endl;
  //for(int i=0;i<5;i+=2)
 // {
   // ans=pow(-1,i)*pow(angle_radian,i)/fact(i);
   // cout<<ans<<endl;
 // }
  return 0;
}