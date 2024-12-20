#include <iostream>

#include "foo.h"
#include "bar.h"

int main() {
    int x = 10;
    std::cout << "Vor dem Funktionsaufruf: x = " << x << std::endl;

    int result = foo(x);

    std::cout << "Nach dem Funktionsaufruf: x = " << x << std::endl;
    std::cout << "Ergebnis der Funktion: result = " << result << std::endl;

    bar();

    baz();

    return 0;
}

void baz() {
    std::cout << "Testausgabe" << std::endl;
}
