// Write a function using reference variables as arguments to swap the 
//value of a pair of integers.

#include <iostream>
using namespace std;
void f(int &a, int &b)	//&a and &b are reference variables	
	{
		cout<<"("<<b<<","<<a<<")"<< endl;
	}
int main()
	{	int m=20;
		int n=30;
		cout<<"Given integers:\t\t"<<"("<<m<<","<<n<<")"<< endl;
	 	cout<<"Swaped integers:\t";
	 	f(m,n);
		return 0;
	}