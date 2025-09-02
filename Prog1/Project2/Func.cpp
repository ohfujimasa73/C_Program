#include "./Func.h"

Func::Func(int in) : value(in) { }
Func::~Func() {}
void Func::setvalue(int in) { value = in + 100; }
int Func::getvalue() { return value; }