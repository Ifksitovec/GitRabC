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
	char oper, check = 'y';

	cout << "This work by Sosnovskiy and Turtsevich" << endl;
	cout << endl;

	do
	{
		cout << "Enter first number: "; 
		cin >> first_numb;
		cout << "Select an operation (+, -, *, /): "; 
		cin >> oper;
		cout << "Enter second number: "; 
		cin >> second_numb;

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
				if (second_numb == 0)
				{
					cout << "ERROR!!!" << endl;
					cout << "Division by 0" << endl;
				}
				else
					cout << first_numb << " " << oper << " " << second_numb << " = " << division(first_numb,second_numb) << endl;
				break;
			}
		default:
			{
				cout << "ERROR!!!" << endl;
				cout << "This operation does not exist" << endl;
			}
		}
		cout << endl;
		cout << "Do you want continue? (y/n): ";
		cin >> check;
		cout << endl;

	} while (check != 'n');
	system("pause");
	return 0;
}

