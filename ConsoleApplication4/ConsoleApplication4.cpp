#include <iostream>
#include<string>
using namespace std;

int main()
{
	int c;

	int num1;
	int num2;
	char op;

	cout << "please enter num1" << endl;
	cin >> num1; 

	cout << "please enter op" << endl;
	cin >> op;

	cout << "please enter num2" << endl;
	cin >> num2;


	
		
	if (op == ('-'))
	{

		cout << num1 - num2 << endl;

	}

	else if (op == ('+'))
	{

		cout << num1 + num2 << endl;


	}

	else if (op == ('*'))
	{
		cout << num1 * num2 << endl;
		
	}
	else if (op == ('/'))
	{

		cout << num1 / num2 << endl;


	}
	do
	{

		cout << "yes is (y) no is (n)" << endl;
		cin >> c;
	} while (c=='y');




	return 0;
	
}








