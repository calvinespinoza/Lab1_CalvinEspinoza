#include <iostream>

using namespace std;

int main()
{

	int num1 = 1, num2 = 1, num3 = 1;
	
	for (int cont = 0; cont < 10; cont++)
	{
		cout << num1 << ", " << num2 << ", " << num3 << ", ";
		num1 = num1 + num2;
		num2 = num2 + num3;
		num3 = num3 + num1; 
	}
	cout << endl; 
}
