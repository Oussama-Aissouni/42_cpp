#include "iter.hpp"

class Awesome
{
private:
	int _n;
public:
	Awesome( ) : _n(42) {return;}
	int get(void) const {return this->_n;}
	~Awesome(){}
};

std::ostream & operator<< (std::ostream &o, const Awesome &rhs) {o << rhs.get(); return o;}

int main( void )
{
	int arr[] = {0,1,2,3,4};
	Awesome arr2[5];

	iter(arr, 5, print);
	iter(arr2, 5, print);
	return 0;
}