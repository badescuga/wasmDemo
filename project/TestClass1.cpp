#include "TestClass1.h"

// implementation of constructor
TestClass1::TestClass1()
 :member(0)
{}

// implementation of "method"
int TestClass1::method()
{
  return this->member++;
}
