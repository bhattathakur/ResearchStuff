/* An election is contested by five candidates. The candidates are numbered 1 to 5 and the voting is done by marking the candidate numbers on the ballot paper. Write a program to read the ballost 
and count the votes cast for each candidate  using  an array variable count.In case, a number readsis outside the range 1 to 5, the ballot should be considered as a 'spoilt ballot', and the program 
should alos count the number of spoilt ballots.*/

#include <iostream>
using namespace std;
int main()
{
	int n,vote,one=0,two=0,three=0,four=0,five=0,x=0;
	cout<<"Enter the total number of voters"<<endl;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cout<<"Press the code number of candidate to whom you want to vote:";
		cin>>vote;
		switch (vote)
		{
			case 1:one++;
			break;
			case 2:two++;
			break;
			case 3:three++;
			break;
			case 4:four++;
			break;
			case 5:five++;
			break;
			default:x++;
		}
	}
	cout<<"vote obtainded by candidate 1\t= "<< one<<endl;
	cout<<"vote obtainded by candidate 2\t= "<< two<<endl;
	cout<<"vote obtainded by candidate 3\t= "<< three<<endl;
	cout<<"vote obtainded by candidate 4\t= "<< four<<endl;
	cout<<"vote obtainded by candidate 5\t= "<< five<<endl;
	cout<<"Number of spoilt ballot \t= "<< x<<endl;

return 0;
}
