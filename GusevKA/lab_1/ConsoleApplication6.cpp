#include "pch.h"
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(0, "");
	char act;
	float first, second;
	cout << "Write first number ";
	cin >> first;
	cout << "Input second number ";
	cin >> second;
	cout << "Write action ";
	cin >> act;
	switch (act)
	{
	case '/':
		if (second != 0) 
		{
			cout << first << " " << act << " " << second << " = " << first / second;
			break;
		}
		else
		{
			cout << "You cann't / by zero";
			break;
		}
	case '+':
		cout << first << " " << act << " " << second << " = " << first + second;
		break;
	case '-':
		cout << first << " " << act << " " << second << " = " << first - second;
		break;
	case '*':
		cout << first << " " << act << " " << second << " = " << first * second;
		break;
	
	default:
		cout << "unknown sign";
	}
	cout << endl;

	_getch();

	return 0;
}
