#include<iostream>           //Print the whole array whenever 5 comes in  {4,8,5,1,3,5,0,12,5,7,3,15,8,4,11}
#include<conio.h>
using namespace std;
int main()
{
	int arr[15]={4,8,5,1,3,5,0,12,5,7,3,15,8,4,11};
	for(int i=0;i<15;i++)
	{
		if(arr[i]==5)        //condition
		{
			for(int i=0;i<15;i++)  //printing whole numbers ,when ever 5 comes.
			{
				cout<<arr[i]<<",";
			}
			cout<<"\n";
		}
	}
	getch();
}
