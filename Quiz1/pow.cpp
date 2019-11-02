#include <iostream>

using namespace std;
/*
int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int p = 1;
    for (int i = 0; i < b; i++)
        p = ((p % k) * (a % k)) % k;
    cout << p % k;
    return 0;
}
*/
int m_pow(int a, int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return a;
    int res = m_pow(a, n / 2);
    if (n % 2 == 0)
        return res * res;
    return res * res * a;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << m_pow(a, b);
    return 0;
}