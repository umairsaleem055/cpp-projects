#include<iostream>         //The Program is to print the Sum of only the positive number in Matrix 
#include<conio.h>
using namespace std;
int main()
{
	int sum=0;                 
	int arr[3][4]={{4,18,-16,11},
	                {-5,10,-2,12},
					{15,-3,17,18}};
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(arr[i][j]>0)      //for only positive number sum
			{
				sum=sum+arr[i][j];
			}
		}
	}
	cout<<"sum of positive no is = "<<sum;				
					
}

