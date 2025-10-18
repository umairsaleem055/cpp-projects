/*   Find Sum and Average of this Matrix           30,20,55,206
                                                   78,81,25,90
                                                   3,48,67,104 */
#include<iostream>
#include<conio.h>                                      
#include<iomanip>                                     
using namespace std;                                   
int main()
{
	int a[3][4]={{30,20,55,206},{78,81,25,90},{3,48,67,104}}; //very important=never use simple brases(),to determine
	//row and colume,f.e={(xx,xx,xx),(xx,xx,xx)} this is wrong,it will give wrong answer.use{}
	int i,j,sum=0;
	float avg;
	for( i=0;i<3;i++)
{
		for( j=0;j<4;j++)
		{
			sum=sum+a[i][j];
		}
	 
		}
		avg=sum/12;
		cout<<"Sum is"<<setw(6)<<"="<<sum;
		cout<<"\nAverage is"<<setw(2)<<"="<<avg;		
}
