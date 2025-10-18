#include<iostream>    //This Program finds the smallest number
#include<conio.h>
using namespace std;
int main()
{
	
	
    int a[10],s,i;           //All the numbers are stored in a Array a[10]
    
    cout<<"This Program finds the Smallest Number";
    cout<<"\nYou have to Enter 10 Numbers\n";
    
    for(i=0;i<10;i++)
    {
    	cout<<"Enter number = ";
    	cin>>a[i];
	}
	s=a[0];
    for( i=1;i<10;i++)
    {
    	if(a[i]<s)
    	{
    	    s=a[i];
    		
		}
	}
	cout<<"\n Smallest number is = "<<s;
}
