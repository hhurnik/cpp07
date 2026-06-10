#include <iostream>
#include <string>
#include "iter.hpp"

//the most important part of the subject - Think carefully about how to support both
//const and non-const elements -> thats why there ar two overload operators in iter.hpp


//print an element without modifying it
template <typename T>
void printElement(const T &value)
{
	std::cout << value << std::endl;
}

//modify integer elements
void increment(int &value)
{
	value++;
}


int main(void)
{
	//test with integer array
	int numbers[5] = {1, 2, 3, 4, 5};

	std::cout << "original integer array:" << std::endl;
	iter(numbers, 5, printElement<int>);

	std::cout << "------------------------" << std::endl;

	//modify all elements
	iter(numbers, 5, increment);

	std::cout << "after increment:" << std::endl;
	iter(numbers, 5, printElement<int>);

	std::cout << "------------------------" << std::endl;

	//test with string array
	std::string words[4] =
	{
		"hello",
		"from",
		"cpp",
		"templates"
	};

	std::cout << "string array:" << std::endl;
	iter(words, 4, printElement<std::string>);

	std::cout << "------------------------" << std::endl;

	//test with const array
	const int constNumbers[4] = {10, 20, 30, 40};

	std::cout << "const integer array:" << std::endl;
	iter(constNumbers, 4, printElement<int>);

	return (0);
}