#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	cout<<"Enter your marks = ";
	cin>>a;
	if((a>0)&(a<100))
	{
		if(a>=33)   //nested-if
		cout<<"you are pass";
		else
		cout<<"you are fail";
	}
	else
	cout<<"invalid entry";
	
	getch();
	
}
