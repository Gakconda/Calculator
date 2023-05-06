#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a, b, selection;
	cout << "Write two numbers: " << endl;
	cin >> a >> b;

	cout <<
		"Select operations:"<< endl<<
		"1. Addition " << endl <<
		"2. Subtraction " << endl <<
		"3. Multiplication " << endl <<
		"4. Division " << endl;

	cin>> selection;

	switch (selection)
	{
	case 1:
		cout << " Result Addition:" << a + b << endl;
		break;
	
	case 2:
		cout << " Result Subtraction:" << a - b << endl;
		break;
	
	case 3:
		cout << " Result Multiplication:" << a * b << endl;
		break;

	case 4:
		cout << " Result Division:" << (float) a / b << endl;
		break;

	default:
		cout << "Error! There is no menu item! " << endl;
		break;
	}

} 
