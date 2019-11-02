#include<iostream>
#include<vector>

using namespace std;

 bool b[1000000];


int main(){
    int n = 10000;
    b[n+1] = true;

    vector<int> p;
    p.push_back(b[n]);

    for(int i = 2; i<n; i++)
    {
        if(!b[i])
        {
        
            p.push_back(i);
            for(int j = i * i; j<n; j+=i)
            {
                b[j] = i;
            }
        }
    }
    

    int k;

    cin >> k;
    cout << p[p[k]];


    return 0;
}