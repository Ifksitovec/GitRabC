// GitRabC++.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "funcs.h"
#include "funcsSerg.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double first_numb, second_numb;
	char oper;

	cout << "Enter first number: "; 
	cin >> first_numb;
	cout << "Enter second number: "; 
	cin >> second_numb;
	cout << "Select an operation (+, -, *, /): "; 
	cin >> oper;

	switch (oper)
	{
	case '+':
		{
			cout << first_numb << " " << oper << " " << second_numb << " = " << addition(first_numb,second_numb) << endl;
			break;
		}
	case '-':
		{
			cout << first_numb << " " << oper << " " << second_numb << " = " << subtraction(first_numb,second_numb) << endl;
			break;
		}
	case '*':
		{
			cout << first_numb << " " << oper << " " << second_numb << " = " << multiplication(first_numb,second_numb) << endl;
			break;
		}
	case '/':
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

