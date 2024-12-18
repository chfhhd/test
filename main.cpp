#include <iostream>
#include "foo.h"

int main() {
    int x = 10;
    std::cout << "Vor dem Funktionsaufruf: x = " << x << std::endl;

    int result = foo(x);

    std::cout << "Nach dem Funktionsaufruf: x = " << x << std::endl;
    std::cout << "Ergebnis der Funktion: result = " << result << std::endl;

    return 0;
}
