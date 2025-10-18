#include<iostream>                   // This program converts celsius into Fahrenheit
#include<math.h>
using namespace std;

int celsius(int c)        // User defined Fuction
{
	int F;
	F = (9.0/5.0*c)+ 32 ;
	return(F);
}
int main()
{
	 int c;
	 char ch;
	 cout<<"This Program will convert Celsius into Fahrenheit"<<endl;
	 cout<<"Enter the Tempreture in Celsius = ";
	 cin>>c;
	 if((c)!=((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z')))  //so only number is entered
	 {
	 	celsius(c);           //fuction call

	cout<<"In Fahrenheit = "<<celsius(c)<< " Deg";
	 }
	 
	 else{
	 	
	 	cout<<"Invalid Entry";
	 }


	
}
   
