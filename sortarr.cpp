#include<iostream.h>
#include<conio.h>
void main()
{
	int n,a[100],temp,i;
	cout<<"Enter the size of array:";
	cin>>n;
	cout<<"Enter values of array:";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Array values are:";
	for(i=0;i<n;i++)
	cout<<"\t"<<a[i];
	for(int j=1;j<n;j++)
	{
	for(i=0;i<n-1;i++)
	{
	if(a[i]>a[i+1])
	{
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
	}
	}
	}
	cout<<"\nSorted Array is:";
	for(i=0;i<n;i++)
    cout<<"\t"<<a[i];
     
}
	
