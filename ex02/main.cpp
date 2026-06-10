#include <iostream>
#include <string>
#include "Array.hpp"

int main(void)
{
	//test default constructor
	std::cout << "EMPTY ARRAY TEST" << std::endl;

	Array<int> empty;

	std::cout << "size = " << empty.size() << std::endl;

	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << std::endl;

	//test constructor with size
	std::cout << "INTEGER ARRAY TEST" << std::endl;

	Array<int> numbers(5);

	//fill array
	for (unsigned int i = 0; i < numbers.size(); i++)
		numbers[i] = i * 10;

	//display values
	for (unsigned int i = 0; i < numbers.size(); i++)
	{
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << std::endl;

	//test copy constructor
	std::cout << "COPY CONSTRUCTOR TEST" << std::endl;

	Array<int> copy(numbers);

	copy[0] = 999;

	std::cout << "original[0] = " << numbers[0] << std::endl;

	std::cout << "copy[0] = " << copy[0] << std::endl;

	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << std::endl;

	//test assignment operator
	std::cout << "ASSIGNMENT OPERATOR TEST" << std::endl;

	Array<int> assigned;

	assigned = numbers;

	assigned[1] = 555;

	std::cout << "original[1] = " << numbers[1] << std::endl;

	std::cout << "assigned[1] = " << assigned[1] << std::endl;

	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << std::endl;

	//test string array
	std::cout << "STRING ARRAY TEST" << std::endl;

	Array<std::string> words(3);

	words[0] = "hello";
	words[1] = "cpp";
	words[2] = "templates";

	for (unsigned int i = 0; i < words.size(); i++)
	{
		std::cout << "words[" << i << "] = " << words[i] << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << std::endl;

	//test exception handling
	std::cout << "EXCEPTION TEST" << std::endl;

	try
	{
		std::cout << numbers[100] << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "caught exception: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "ALL TESTS FINISHED" << std::endl;

	return (0);
}