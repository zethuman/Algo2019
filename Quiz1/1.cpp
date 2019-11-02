#include <iostream>

using namespace std;

int main() {
    double x, l, r;
    double eps = 1e-10;
    cin >> x;
    l = 1;
    r = x;
    while (r - l > eps) {
        double t = (r + l) / 2.0;
        if (t * t * t <= x)
            l = t;
        else
            r = t;
    }
    cout << r;
    return 0;
}