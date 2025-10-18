#include<iostream>
#include<conio.h>

using namespace std;   //program is to find sum ,sum=30+33+36+....+60
int main()
{
	int a=30,sum=0;
	while(a<=60)
	{
		sum=sum+a;
		a+=3;        //can be writen as a=a+3
	}
          cout<<"total "<<sum;
getch();
	
}
