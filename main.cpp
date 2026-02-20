#include <iostream>
#include <string>
#include "func.h"
using namespace std;

int main()
{
	int a, b, res;
	string name;
	cout<<"Enter first number\n";
	cin>>a;
	cout<<"Enter second number\n";
	cin>>b;
	res = func(a, b);
	cout<<"Enter your name\n";
	cin>>name;
	cout<<"Hello, " << name << "Your multiplication is " <<res;
	return 0;
}