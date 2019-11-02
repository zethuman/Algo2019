#include <iostream>
#include <queue>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        printf("Case %d:\n", i + 1);
        int n, m, x;
        string s;
        cin >> n >> m;
        deque<int> q;
        for (int j = 0; j < m; j++) {
            cin >> s;
            if (s == "popLeft") {
                if (q.empty())
                    cout << "The queue is empty" << endl;
                else {
                    printf("Popped from left: %d\n", q.front());
                    q.pop_front();
                } 
            }
            if (s == "popRight") {
                if (q.empty())
                    cout << "The queue is empty" << endl;
                else {
                    printf("Popped from right: %d\n", q.back());
                    q.pop_back();
                } 
            }
            if (s == "pushLeft") {
                cin >> x;
                if (q.size() == n)
                    cout << "The queue is full" << endl;
                else {
                    q.push_front(x);
                    printf("Pushed in left: %d\n", x);
                }
            }
            if (s == "pushRight") {
                cin >> x;
                if (q.size() == n)
                    cout << "The queue is full" << endl;
                else {
                    q.push_back(x);
                    printf("Pushed in right: %d\n", x);
                }
            }
        }
    }
    return 0;
}