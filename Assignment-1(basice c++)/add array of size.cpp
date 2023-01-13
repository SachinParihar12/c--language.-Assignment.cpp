#include<iostream>
using namespace std;

int main()
{
	int a[10],i,sum;
	cout<<"Enter the 10 number"<<endl;
	
	for(i=0 ;i<10 ; i++)
	{
		cin>>a[i];
	}
	for(i=0; i<10; i++)
	{
		sum = sum + a[i];
	}
	
	cout<<"sum of 10 number  "<<sum<<endl;
	
	return 0;
}
