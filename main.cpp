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
	cout<<"Enter your name\n";
	cin>>name;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"Enter your second number"<<endl;
	cin>>b;
	cout<<endl<<"Your matrix"<<endl;
	const int A=5;
	int mas [A][A];
	for (unsigned i{ 0 }; i < M; i++)
    {
        for (unsigned j{ 0 }; j < M; j++)
        {
            mas[i][j] = rand() % (30 + 1);
            cout << mas[i][j] << "\t";
        }
        cout << endl;
    }
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