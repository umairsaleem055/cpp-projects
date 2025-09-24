#include<iostream>     //program to print table of any number
#include<conio.h>       
using namespace std;
int main()
{        
	int a,prod;      
	cout<<"Enter a number =";
	cin>>a;
	for(int i=1;i<=20;i++)        //use of for loop
	{
		prod=a*i;
		cout<<a<<" x "<<i<<"="<<prod<<endl;
	}
	getch();
	
}
