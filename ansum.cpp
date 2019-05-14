#include<iostream.h>
#include<conio.h>
void main()
{
	float a,b,n,d,sum=0;
	float t;
	cout<<"Enter the Number of terms:";
	cin>>n;
	cout<<"Enter the first term:";
	cin>>a;
	cout<<"Enter the common difference:";
	cin>>d;
	if(n>0)
	{
	t=n/2;
	b=(n-1)*d;
	sum=(2*a*t)+(b*t);
	cout<<"Sum="<<sum;
	}
	else
	cout<<"Invalid";
}
	
