#include <iostream>
#include <array>
#include <cmath>
using namespace std;
int main()
{
	system("chcp 1251 > nul");

	array<int, 25> mass;
	int number;
	cout << "Введіть ціле число від 0 до 25: ";
	cin >> number;
	if (number > 0 && number <= 25)
	{
		cout << "Числа в степені до " << number << " це: ";
		for (int i = 0; i < number; i++)
		{
			mass[i] = pow(2, i);
			cout << mass[i] << " ";
		}
	}
	if (number < 0)
	{
		cout << "Введене число не може бути менше 0.";
	}
	if (number == 0)
	{
		cout << "0";
	}
	if (number > 25)
	{
		cout << "Введена кількість перевищує розмір масива.";
	}
	return 0;
}