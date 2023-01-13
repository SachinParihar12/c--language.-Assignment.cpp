#include<iostream>
using namespace std;

int main()
{
	int x, y;
	cout<<"Enter two number"<<endl;
	cin>>x>>y;
	
	x = x+y;
	y = x-y;
	x = x-y;
	
	cout<<"After the swapping value of x ="<<x<<" and y ="<<y<<endl;
	return 0;
}
