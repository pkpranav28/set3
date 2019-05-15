#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int h1,m1,h2,m2,h3,m3;
	cout<<"Enter two time in hr:min format:";
	cin>>h1>>m1>>h2>>m2;
	if(h1<24 && m1<60 && h2<24 && m2<60)
	{
	cout<<h1<<":"<<m1<<"\n";
	cout<<h2<<":"<<m2<<"\n";
	h3=h1-h2;
	m3=m1-m2;
	if(h3<0 || m3<0)
	{
		h3=abs(h3);
		m3=abs(m3);
	}
	cout<<h3<<":"<<m3;
	}
	else
	cout<<"Invalid time";
}
	
