#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number\n";
	cin>>n;
	int i=1;
	long factorial =1.0;
	do
	{
	factorial*=i;
	i++;	
	}
	while(i<=n);
	cout<<"Factorial of"<<n<<"="<<factorial;
	return 0;
}