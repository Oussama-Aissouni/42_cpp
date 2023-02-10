#ifndef ARRAY
#define ARRAY

#include "iostream"

template <class T> class Array
{
	private:
		size_t	n;
		T *arr;
	public :
		Array() : n(0)
		{
			arr = new T[0];
		}
		Array(size_t n_) : n(n_)
		{
			arr = new T[n];
			for (size_t i = 0; i < n; i++) 
				arr[i] = T();
		}
		Array(const Array& fixed) : arr(NULL)
		{
			*this =fixed;
		}
		Array & operator=(const Array& rhs)
		{
			delete this->arr;
			this->arr = new T[rhs.n];
			this->n = rhs.n;
			for (size_t i = 0; i < rhs.n; i++)
				this->arr[i] = rhs.arr[i];
			return *this;
		}
		T & operator[](size_t idx)
		{
			if (idx > this->n)
				throw OutOfBounds();
			return arr[idx];
		}
		const T & operator[](size_t idx) const
		{
			if (idx > this->n)
				throw OutOfBounds();
			return arr[idx];
		}
		~Array(){}
		size_t size() const{return n;}

		class OutOfBounds : public std::exception
		{
			public :
				OutOfBounds(){}
				~OutOfBounds()throw() {}
				const char *what() const throw()
				{
					return "out of bounds";
				}
		};
};

#endif