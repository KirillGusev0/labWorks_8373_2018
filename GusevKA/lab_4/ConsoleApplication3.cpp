#include"pch.h"
#include <iostream> 


using namespace std;

int fact(int n)
{

	
	if (n >= 0)
	{
		int i;
		int b;
		b = 1;
		for (i = 1; i < n + 1; i++)
		{

			b = b * i;
			
		}
		return b;
	}

}
	


double stepen(int step, int number)
{
	
	

	if (step >= 0)
	{
		int temp = number;
		for (int i = 1; i <= step-1; i++)
		{
			
			number = number * temp;
			 
		}
		return  number;
	}
	if (step < 0)
	{
		int temp = number;
		for (int i = 1; i <= -step-1; i++)
		{
			number = number * temp;
		}
		return (1.0 / number);
	}
	return  number;
}

bool simple (int k)
{
	bool number = true;
	if (k == 2)
	{
		number = true;
	}
	for (int i = 2; i < k; i++)
	{
		if (k%i == 0)
		{
			number = false;
		}

	}
	return number;
}

double sqrt(int n)
{

	if (n == 1)
	{
		return 1;
	}
	if (n == 0)
	{
		return 0;
	}
	if (n > 1)
	{
		
		double temp;
		double result;
		result = n; 
		do
		{
			temp = result;
			result = (temp+n/temp)/2;//  для вычесления квадратного корня используется метод Ньютона
		} 
		while (temp - result != 0);
		return result;
	}
}
	

	int main()
	{
		
		int number, step;
		cout << "stepen ";
		cin >> step;
		cout << "number ";
		cin >> number;
		cout << "result is " << stepen(step, number) << endl;
		int a;
		cout << "fact ";
		cin >> a;
		cout << fact(a) << endl;
		int b;
		cout << "sqrt's number ";
		cin >> b;
		cout << sqrt(b) << endl;
		int c;
		cout << "check on simple ";
		cin >> c;
		if (simple (c) == 1)
		{
			cout << "simple " << endl;
		}
		else
		{
			cout << "not simple " << endl;
		}
		system("pause");
		return 0;
	}
