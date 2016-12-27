#include <stdio.h>
#include "TestClass1.h"
#include "signalrclient\stdafx.h"
#include "signalrclient\connection.h"
#include <iostream>

int main(int argc, char **argv)
{
    TestClass1 *a = new TestClass1();
    printf("here is the TC1: %i \n\n", a->method());
    printf("Hello, world! 2017 Enter a fuckin' letter \n");
    char c = getchar();
    return 0;
}
