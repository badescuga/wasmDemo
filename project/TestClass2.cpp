#include "TestClass2.h"

// implementation of constructor
TestClass2::TestClass2()
 :member(0)
{}

// implementation of "method"
int TestClass2::method()
{
  return member++;
}