#include<iostream>
using namespace std;
int main()
{
	int i,j,n,c,temp,min;
	cout<<"Enter the number of elements: ";
	cin>>n;
	int a[n];
	cout<<"\nEnter the Elements: \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		c=i;
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				c=j;
			}
		}
		temp=a[i];
		a[i]=a[c];
		a[c]=temp;
	}
	cout<<"The Sorted List is: \n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	return 0;
}	

