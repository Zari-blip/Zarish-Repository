#include<iostream>
using namespace std;
//function defination
int passbyvalue(int num)
{
	num=num+10;
	cout<<"inside Function(passbyvalue):"<<num;
	return num;
}
void passbysub(int sub)
{
	sub=sub-5;
	cout<<"sub in function(passbysub):"<<sub;
}
void passbydiv(int div)
{
	div=div/5;
	cout<<"div in function(passbydiv):"<<div;
}
int main()
{
	int number =5;
	cout<<"\nbefore function call:"<<number<<endl;
    int g=passbyvalue(number);
	cout<<"\nAfter function call:"<<number<<endl;
	cout<<"\nbefore sub:"<<number<<endl;
	passbysub(number);
	cout<<"\nbefore divide :"<<number<<endl;
	passbydiv(number);
	return 0;
}