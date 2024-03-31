#include <iostream>

class Base
{
public:
	Base(int value)
		:_value(value)
	{

	}

	void print()
	{
		std::cout << "dgsgd";
	}

	Base(Base& other)
	{
		_value = other._value;
	}
private:
	int _value;
};

const char* func()
{
	const char* p = "Hello World";

	return p;
}


int main()
{
	Base* b;
	b->print();

	//std::cout << p << std::endl;

	return 0;
}