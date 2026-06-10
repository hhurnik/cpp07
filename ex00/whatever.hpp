#ifndef WHATEVER_HPP
#define WHATEVER_HPP

//swap two values of the same type
template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

//return the smaller value
template <typename T>
const T &min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	return (b);
}

//return the greater value
template <typename T>
const T &max(const T &a, const T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif