#include<iostream>
using namespace std;

int main()
{
	int x, y, max;
	cout<<"Enter two number"<<endl;
	cin>>x>>y;
	
	max = x > y ? x : y;
	
	cout<<"Maximum of two number is "<<max<<endl;
	
	return 0;
}
