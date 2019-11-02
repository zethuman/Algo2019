#include <iostream>
#include <queue>
#include <cmath>
#include<bits/stdc++.h>

int used[1000001];

using namespace std;

int main() {
    int t;
    cin >> t;
    memset(used, 0, sizeof(used));
    for (int i = 1; i <= t; i++) {
        int n; 
        cin >> n;
        queue<pair<int, int> > q;
        q.push(make_pair(n, 0));
        used[n] = i;
        while (q.front().first != 0) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            if (x - 1 >= 0 && used[x - 1] != i) {
                q.push(make_pair(x - 1, y + 1));
                used[x - 1] = i;
            }
            for (int k = 2; k <= (int)sqrt(x); k++) {
                if (x % k == 0) {
                    if (used[x/k] != i) {
                        used[x/k] = i;
                        q.push(make_pair(x/k, y + 1));
                    }
                }
            }
        }
        cout << q.front().second << endl;
    }
    return 0;
}