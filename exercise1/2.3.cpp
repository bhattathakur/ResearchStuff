//Write a program that inputs a charcter from keyboard and display its correponding  ASCII value on the screen.
#include <iostream>
using namespace std;
int main(){
char c;
cout<<"Enter a character"<<endl;
cin>>c;
cout<<"ASCII value of a given character "<<c<<"\t"<<int(c)<<endl;

return 0;
}