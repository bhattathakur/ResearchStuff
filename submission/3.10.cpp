/*
An electricity board charges the following rates to domestic users to discourage consumption of energy:
For the first 100 units - 60 c perunit
For the  next 100 units - 80 c perunit
Beyond 300 units        - 90 c perunit
All users are charged a minimum of $ 50.00. If the total amount is more than  $300 then an additioal surcharge 
of  15% is added.
Write a program to read the names of users and number of units consumed and print out he charges with names.
*/

#include<iostream>
using namespace std;
// defining the electricity class
class electricity
{
  char name[20];
  int unit;
  float charge;
  public:
  //Definng the  functions to get name and  no of units.
  void get()      
  {
    cout<<"Enter the name and electricity consumed by the user"<<endl;
    cin>>name>>unit;
  }
  //Defining the function to  check the charge for units consumed
  void check()
  {
    if(unit<=100)
    {
      charge=unit*0.60;
      charge=charge+50;
    }
    else if(unit<=300 && unit>100)
    {
      charge=100*0.60+(unit-100)*0.80;
      charge=charge+50;
    }
    else if(unit>300)
    {  charge=100*0.60+200*0.80+(unit-300)*0.90;
       charge=charge+50;
    }
  }
  //Display of the  charge of electricity consumption
  void display()
  {
    if(charge>=300)
      {
        charge=charge*1.15;
      }
    cout<<name<<"\t\t\t"<<charge<<endl;    
  }
};
main()
{
  int n,i;
  electricity e[10];    //Defining the array for accessing the functions for each users.
  cout<<"\n Enter the number of electricity users:\n";
  cin>>n;
  for(i=0;i<n;i++)
    {
      e[i].get();
      e[i].check();
    }
  cout<<"\n Electricity Users: \n";
  cout<<"\n Name\t\t Total charge($)\n";
  cout<<"==================================\n";
  for(i=0;i<n;i++)
  {
    e[i].display();
  }
  return 0;
}
