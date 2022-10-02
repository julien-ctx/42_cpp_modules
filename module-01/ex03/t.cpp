#include <iostream>

int main()
{
	int a = 9;
	int &b = a;

	std::cout << "a: " << &a << "b: " << &b << std::endl;
}
