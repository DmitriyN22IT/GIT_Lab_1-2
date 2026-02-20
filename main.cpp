#include <iostream>
#include <ctime>
#include <string>
#include "func.h"
#include "fact.h"
using namespace std;

int main()
{
	srand(time(0));
	int a, b, res=0, temp;
	string name;
	cout<<"Please, enter your name\n";
	cin>>name;
	cout<<name<<", enter first number"<<endl;
	cin>>a;
	cout<<name<<", enter your second number"<<endl;
	cin>>b;
	cout<<"Hello, "<<name<<".What you want to do? 1-Multiplication, 2-Factorial(a), 3-Factorial(b), 4-Sum";
	cin>>temp;
	switch(temp)
	{
		case 1: res=func(a, b); cout<<< name << ", your multiplication is " <<res; break;
		case 2: res=fact(a); cout<<< name << ", your factorial(a) is " <<res; break;
		case 3: res=fact(b); cout<<< name << ", your factorial(b) is " <<res; break;
		case 4: res=a+b; cout<<< name << ", your sum is " <<res; break;
		default: cout<<"Unknown option"; break;
	}
	return 0;
}