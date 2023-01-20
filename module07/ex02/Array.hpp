#ifndef ARRAY
#define ARRAY

#include "iostream"

template <class T> class Array
{
	private:
		size_t	n;
		T *arr;
	public :
		Array() {arr = new T[0];}
		Array(size_t n_) : n(n_) {arr = new T[n]; for (size_t i = 0; i < n; i++) arr[i] = (T)NULL;
		}
		Array(const Array& fixed){*this =fixed;}
		Array & operator=(const Array& rhs){
			this->arr = new T[rhs.n];
			for (size_t i = 0; i < n; i++)
			{
				if (i == rhs.n)
					throw OutOfBounds();
				this->arr[i] = rhs.arr[i];
			}
			return *this;
		}
		T & operator[](size_t idx){
			if (idx > this->n)
				throw OutOfBounds();
			return arr[idx - 1];
		}
		const T & operator[](size_t idx) const{
			if (idx > this->n)
				throw OutOfBounds();
			return arr[idx - 1];
		}
		~Array(){}
		int size() const{return n;}

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