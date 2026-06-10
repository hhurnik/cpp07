#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <cstddef>


template <typename T>
class Array
{
	private:

		//pointer to allocated storage
		T* _data;

		//number of elements
		unsigned int _size;

	public:

		Array();

		//create an array of n default initialized elements
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		~Array();

		//writable access with bounds checking
		T& operator[](unsigned int index);

		//read-only access with bounds checking
		const T& operator[](unsigned int index) const;

		//return current array size
		unsigned int size() const;

		class IndexOutOfBoundsException : public std::exception
		{
			public:

				virtual const char* what() const throw();
		};
};

#include "Array.tpp"

#endif