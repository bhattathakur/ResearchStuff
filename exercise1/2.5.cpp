// Write a C++ program that will ask for a temperature in Fahrenheit and display it in Celsius.
#include <iostream>
using namespace std;
int main(){
  float F;
 cout<<"Enter the temperature in Fahrenheit scale"<<endl;
 cin>> F;
 if(F<-459.67)
   {
     cout<<F<<"\t is below absoute zero and no physical significance"<<endl;
return -1;
}
cout<<"Corresponding value in Celsius scale is \t"<<5*(F-32)/9<<endl;
return 0;
}
