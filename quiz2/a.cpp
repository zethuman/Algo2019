#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 100001;
int p[N];
int d[N];
int a[N];


int main()
{
    int n, q;
    cin >> n >> q;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        if(a[i] >=a[i + 1]){
            d[i] = 1;
        }
        else {
            d[i] = 0;
        }
        p[i] = p[i - 1] + d[i];
    }
 
    for(int i = 1; i <= q; i++){
        int l,r;
        cin >> l >> r;
        cout << p[r - 1] - p[l - 1] + 1 << endl;
    }
        return 0;
}
