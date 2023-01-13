#include<iostream>
using namespace std;

int main()
{
	float l, b, h, avg;
	cout<<"Enter the three number"<<endl;
	cin>>l>>b>>h;
	
	avg = (l+b+h) / 3.0;
	
	cout<<"Average of three number "<<avg<<endl;
	return 0;
}
