#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n = 10000;
    bool b[n+1];
    b[1] = true;

    vector<int> p;

    for(int i = 0; i<= n; i++){
        if(!b[i]){
            p.push_back(i);
            for(int j = i + i; j<=n; j+=i ){
                b[j] = i;

            }
        }
    }

    int k;
    cin >> k;
    cout <<p[p[k]];

    return 0;
}