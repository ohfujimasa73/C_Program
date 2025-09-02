#include "./Test.h"
#include "./Func2.h"
#include <iostream>

Test::Test(int in) : value(in) {}
Test::~Test() {}
void Test::setvalue(int in) { value = in; }
int Test::getvalue() { return value; }

int main() {
	Test t(5);
	std::cout << "Initial Test value: " << t.getvalue() << std::endl;
	t.setvalue(42);
	std::cout << "Updated Test value: " << t.getvalue() << std::endl;
	Func2 f(123);
	std::cout << f.getvalue() << std::endl;
	f.setvalue(10);
	f.dosomething();
	std::cout << f.getvalue() << std::endl;
	return 0;
}