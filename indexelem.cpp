#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10],n,i;
	cout<<"Enter the size of array:";
	cin>>n;
	cout<<"Enter the values:";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Element\tIndex\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t"<<i<<"\n";
}
		
