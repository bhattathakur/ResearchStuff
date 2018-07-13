#include<iostream>
#include<string>
using namespace std;
int main()
{
  char answer1[80];
  string answer2;
  char question1[]="What is your name?\n";
  string question2="Where are you from?\n";
  cout<<question1;
  cin>>answer1;
  cout<<question2;
  cin>>answer2;
  cout<<"Hello "<<answer1<<" from "<<answer2<<" !\n";
  return 0;
}