// date: 2020-04-12
// desc: Initializer Lists

#include <vector>

int main(void)
{
    // use clang++
 
    int i;      // i has undefined valuse
    int j {};   // j is initialized by 0
    int* p;     // p has undefined valuse
    int* q {};  // q is initialized by nullptr

    int x1(5.3);        // OK, but OUCH: x1 becomes 5
    int x2 = 5.3;       // OK, but OUCH: x2 becomes 5
    int x3 {5.3};       // ERROR: narrowing
    int x4 = {5.3};     // ERROR: naarowing
    char c1 {7};        // OK: even though 7 is an int, this is not narrowing
    char c2 {9999};     // ERROR: narrowing (if 99999 dosn't fit into a char)
    std::vector<int> v1 { 1, 2, 4, 5};      // OK
    std::vector<int> v2 { 1, 2.3, 5, 6.6 }  // ERROR: narrowing

    return 0;
}
