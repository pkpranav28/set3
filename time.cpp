#include<iostream.h>
#include<conio.h>
void main()
{
	int m,h;
	cout<<"Enter a number in minutes:";
	cin>>m;
	if(m>59)
	{
		h=m/60;
		m=m%60;
		cout<<h<<"\t"<<m;
	}
	else if(m>0)
	{
		h=0;
		cout<<h<<"\t"<<m;
	}
	else
	cout<<"Invalid";
	
}
