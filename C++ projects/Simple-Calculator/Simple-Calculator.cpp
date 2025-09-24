#include<iostream>             //This is a simply calculator that can add,subtract,multiply and divide Two numbers.
#include<conio.h>             // any invalid entry will give error
#include<iomanip>        
using namespace std;
int main()
{
	char op,ch;
	float x,y,add,sub,mult,div;

	cout<<"Enter first operand"<<setw(10)<<"=";
	cin>>x;
	if((x)!=((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z')))   //if statement to check only number is entered
	{
	
	cout<<"Enter the second operand"<<setw(5)<<"=";
	cin>>y;
	
	   if((y)!=((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z')))  // nested if to check only number in entered
	
	   {
	
	cout<<"Enter the operator(+,-,*,/) = ";
	cin>>op;
	
	switch(op)                //use of switch statement
	{
		case '+': add=x+y;
		          cout<<"Result is"<<setw(20)<<"="<<add;
		          break;
		case '-': sub=x-y;
		          cout<<"Result is"<<setw(20)<<"="<<sub;
				  break;
		case '*': mult=x*y;
		          cout<<"Result is"<<setw(20)<<"="<<mult;
				  break;
		case '/': div=x/y; 	
		          cout<<"Result is"<<setw(20)<<"="<<div;
				  break;
	    default : cout<<"Invalid Opperator";	                   //  if incorrect opperator in inserted		  	  		                
	}
       }
       
       else                                   //nested if ending 
       {
       	cout<<"Enter only Number";
	   }
}
else                                             // outer if  ending
{
	cout<<"Enter only Number";
}
	
}                                //written by Umair Saleem
