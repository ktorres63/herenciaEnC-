#include <iostream>

#include "A.h"
#include "B.h"
#include "C.h"
#include "D.h"
#include "E.h"


int main(int argc, char *argv[]) {

    A *a = new C();
    a->foo();
  /*
    A a;
    a.foo();

    B b;
    b.foo();


    A *pa = new B;
    pa->foo();

    delete pa;
    return 0;
  */
}
