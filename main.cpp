#include <iostream>
 void foo(int a, int b) {
     std::cout << "Max = " << ((a > b ) ? a : b) << '\n';
 }
 int main () {
    foo(7,5);
    return 0;
}