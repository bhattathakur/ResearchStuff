// Write a program to read two numbers from the keyboard and display the larger value on the screen.

#include <iostream>
using namespace std;
int main(){
float num1, num2;
cout<<"enter the first number"<<endl;
cin>>num1;
cout<<"enter the second number"<<endl;
cin>>num2;
cout<<"the larger of the number is" <<endl;
if (num1>num2){
cout<<num1<<endl;
}
else{
cout<<num2<<endl;
}

return 0;
}