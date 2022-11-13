#include<iostream>
using namespace std;

int main()
{
	int n,a=0,b=1,fib;
	cout<<"Enter length of series"<<endl;
	cin>>n;
	if(n<=1)
	{
		return n;
	}
	while(a<n)
	{
		cout<<a<<endl;
		fib=a+b;
		a=b;
		b=fib;
	}
	return 0;
}
