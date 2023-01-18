#ifndef BASE
#define BASE

#include "cstdlib"
#include "iostream"

class Base
{
public:
	Base(){};
	virtual ~Base(){};
};


class A : public Base
{
public:
	A(){};
	~A(){};
};

class B : public Base
{
public:
	B(){};
	~B(){};
};

class C : public Base
{
public:
	C(){};
	~C(){};
};

#endif