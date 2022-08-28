#include<iostream>
using namespace std;
int main() 
{
	int i,j,n,temp;
	cout << "Enter the number of elements: ";
	cin >> n;
	int a[n];
	cout << "Enter elements:\n";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(i=1;i<=n-1;i++)
	{
		temp=a[i];
		j=i-1;
		while((temp<a[j])&&(j>=0))
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
	cout <<"Array after Sorting:\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
