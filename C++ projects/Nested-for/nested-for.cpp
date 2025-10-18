#include<iostream>
#include<conio.h>
using namespace std;
int main()
{                                  //1 2 3 4 5
	int i,j;                       //2 3 4 5
	                               //3 4 5
	    for( j=1;j<=5;j++)         //4 5
	 {                             //5
	    for(int k=j;k<=5;k++)
	   {
	    cout<<k<<" ";
	   }
	     cout<<"\n";
	 }

	   getch();
}
