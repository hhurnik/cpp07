template <typename T>
Array<T>::Array()
	: _data(NULL), _size(0)
{
	//create an empty array
}

template <typename T>
Array<T>::Array(unsigned int n)
	: _data(new T[n]), _size(n)
{
	//allocate memory for n elements
	//elements are default initialized
}

template <typename T>
Array<T>::Array(const Array<T>& other)
	: _data(NULL), _size(0)
{
	//reuse assignment operator
	*this = other;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this != &other)
	{
		//release old memory
		delete[] _data;

		_size = other._size;

		if (_size > 0)
		{
			//allocate new storage
			_data = new T[_size];

			//copy all elements
			for (unsigned int i = 0; i < _size; i++)
				_data[i] = other._data[i];
		}
		else
		{
			_data = NULL;
		}
	}

	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	//release allocated memory
	delete[] _data;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	//throw exception if index is invalid
	if (index >= _size)
		throw IndexOutOfBoundsException();

	return (_data[index]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	//throw exception if index is invalid
	if (index >= _size)
		throw IndexOutOfBoundsException();

	return (_data[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	//return current array size
	return (_size);
}

template <typename T>
const char* Array<T>::IndexOutOfBoundsException::what() const throw()
{
	return ("Array index out of bounds");
}