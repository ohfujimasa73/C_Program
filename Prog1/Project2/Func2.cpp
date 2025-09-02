#include "./Func2.h"

Func2::Func2(int in) : Func(in) {}
Func2::~Func2() {}
void Func2::dosomething() { setvalue(getvalue() + 1); }