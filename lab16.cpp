// Code to implement the gcf function goes here
#include <iostream>
using namespace std;
int gcf(int a, int b) {
    // Ensure a and b are positive
    a = abs(a);
    b = abs(b);

    // Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}