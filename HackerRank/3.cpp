#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << std::setprecision(7) << d << endl;
    cout << std::setprecision(14) << e << endl;
    return 0;
}
