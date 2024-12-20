#include "bar.h"

void bar() {
    std::ofstream outfile ("test.txt");
    outfile << "Hallo Welt!" << std::endl;
    outfile.close();
}
