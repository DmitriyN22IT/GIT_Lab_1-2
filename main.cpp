#include <iostream>
#include <ctime>
#include <string>
#include "func.h"
using namespace std;

int main()
{
	srand(time(0));
	int a, b, res;
	string name;
	cout<<"Enter your first number"<<endl;
	cin>>a;
	cout<<"Enter your second number"<<endl;
	cin>>b;
	res = func(a, b);
	cout<<"Enter your name"<<endl;
	cin>>name;
	cout<<"Hello, " << name << ". Your multiplication is " <<res;
	cout<<endl<<"Your matrix"<<endl;
	const A=5;
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
	return 0;
}