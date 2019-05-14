#include<iostream.h>
#include<conio.h>
void main()
{
	int n,a[100],max=0,i;
	cout<<"Enter the size of array:";
	cin>>n;
	cout<<"Enter values of array:";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Array values are:";
	for(i=0;i<n;i++)
	cout<<"\t"<<a[i];
	for(i=0;i<n;i++)
	{
	if(a[0]<a[i])
	a[0]=a[i];
	}
    cout<<"\nMaximum element is:"<<a[0];
     
}
	
