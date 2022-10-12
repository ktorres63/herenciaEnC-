#include <iostream>

#include "A.h"
#include "B.h"
int main(int argc, char *argv[]) {
    /*
    A a;
    a.foo();

    B b;
    b.foo();

    */
    A *pa = new B;
    pa->foo();

    delete pa;
    return 0;
}
