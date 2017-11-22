// GitRabC++.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "funcs.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double first_numb,second_numb;
	int n;

	cout << "Enter first number" << endl; 
	cin >> first_numb;
	cout << "Enter second number" << endl; 
	cin >> second_numb;
	cout << "Select an action:" << endl; 
	cout << "1-Addition, 2-Subtraction, 3-Multiplication, 4-Division" << endl;
	cin >> n;

	switch (n)
	{
	case 1:
		{
			cout << "Result = " << addition(first_numb,second_numb) << endl;
			break;
		}
	case 2:
		{
			cout << "function in development" << endl;
			break;
		}
	case 3:
		{
			cout << "function in development" << endl;
			break;
		}
	case 4:
		{
			cout << "function in development" << endl;
			break;
		}
	default:
		{
			cout << "This operation does not exist" << endl;
		}
	}
	system("pause");
	return 0;
}

