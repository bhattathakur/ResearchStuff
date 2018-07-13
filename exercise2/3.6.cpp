/*
A cricket team has the following table of batting figures for a sereis of test matches:
Player's name     Runs      Innings     Times not out
Sachin            8430        230         18
Saurav            4200        130         9
Rahul             3350        105         11
.                   .           .         .
.                   .           .         .
 
write a program to read the following figures set out in the above for, to calculate the batting average and print out the complete table including the averages.
*/

#include<iostream>
#include<iomanip> // for setw
#include<cmath>
void line();
using namespace std;
int main()
{
  int runs,innings,n;
  float average;
  cout<<"What is the total number of players?"<<endl;
  cin>>n;
  cout<<"\nEnter the following details of Crickter:\n"
      <<"1)\tPlayer's name \n"
      <<"2)\tRuns\n"
      <<"3)\tInnings \n"
      <<"4)\tTimes not out \n";
//Forming the structure for details of a cricketer
  struct cricketer
  {
    char name[15];
    int innings;
    int runs;
    int notout;
    float average;
  }record[n];       //Defining the objects as the array of  of  elements
  for (int i=0;i<n;i++)
  {
    cout<<"\nEnter the Player's name:-";
    cin>>record[i].name;
    cout<<"\nEnter Runs:-";
    cin>>record[i].runs;
    cout<<"\nEnter Innings:-";
    cin>>record[i].innings;
    cout<<"\nEnter Time not out:-";
    cin>>record[i].notout;
    record[i].average=float((record[i].runs)/(record[i].innings-record[i].notout));/*A batting average represnets how many runs on avearge a batsman scores before getting out. Batting Average: Runs/number of out=runs/(innings-not outs)*/
  }
  cout<<"\n\n\n";
  cout<<setw(50)<<"CRICKETER'S TABLE\n";
  line();
  cout<<setw(15)<<"Player's name"<<setw(15)<<"Runs"<<setw(15)<<"innings"<<setw(20)<<"Times not out"<<setw(12)<<"Average\n";
  line();
  for (int i=0;i<n;i++)
  {
    cout<<setw(12)<<record[i].name<<setw(17)<<record[i].runs<<setw(15)<<record[i].innings<<setw(16)<<record[i].notout<<setw(12)<<record[i].average<<endl;
    
  }
  line();
  
  return 0;
}
//function for printing line
void line()
{
  for(int i=1;i<41;i++)
  cout<<"--";
  cout<<"\n";
}
