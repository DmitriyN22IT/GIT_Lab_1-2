#include <iostream>
#include "func.h"
using namespace std;

int main()
{
	int a, b, res;
	cout<<"Enter first number\n"
	cin>>a;
	cout<<"Enter second number\n"
	cin>>b;
	res = func(a, b);
	cout<<"Multiplication is " <<res;
	return 0;
}