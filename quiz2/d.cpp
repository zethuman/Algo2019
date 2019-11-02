#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPeek(int a[], int l, int n ){
     for(int  i = l; i < n; i++){
         if(a[n] <= a[i])
         return false;
     }
     return true;
}

int main()
{
    int a[100001], b[100001], c[100001];
    int n, q;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    cin >> q;
    for(int i = 0; i < q; i++){
        int l, r, cnt = 0;
        cin >> l >> r;
        for(int j = l; j <= r; j++)
        {
            if(isPeek(a,l,j))
            cnt++;
        }
        cout << cnt << endl;
    }
 
    return 0;
}
