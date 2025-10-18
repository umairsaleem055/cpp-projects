#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char a;
	cout<<"Enter a lower case character = ";
	cin>>a;
	switch(a)
	{
	case 'a':
    case 'e':
    case 'i':
    case 'o':
	case 'u': cout<<"\nit is a vowel";
	          break;
	
	default :cout<<"\nit is a consonent";
    }
		
		getch();
}
