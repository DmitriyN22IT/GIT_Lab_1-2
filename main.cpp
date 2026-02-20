#include <iostream>
#include <string>
#include "func.h"
#include "fact.h"
using namespace std;

int main()
{
	int a, b, res=0, temp;
	string name;
	cout<<"Enter your name\n";
	cin>>name;
	cout<<"Enter first number\n";
	cin>>a;
	cout<<"Enter second number\n";
	cin>>b;
	cout<<"Hello, "<<name<<".What you want to do? 1-Multiplication, 2-Factorial(a), 3-Factorial(b)";
	cin>>temp;
	switch(temp)
	{
		case 1: res=func(a, b); cout<<< name << ", your multiplication is " <<res; break;
		case 2: res=fact(a); cout<<< name << ", your factorial(a) is " <<res; break;
		case 3: res=fact(b); cout<<< name << ", your factorial(b) is " <<res; break;
		default: cout<<"Unknown option"; break;
	}
	return 0;
}