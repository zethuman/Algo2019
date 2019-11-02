#include <iostream>
#include<vector>

using namespace std;


int main()
{
    int n,cnt = 0;
    cin >> n;
    int a[n] = {0};
    
    for(int i = 2; i < n; i++){
        for(int j = i * i; j <= n; j+=i ){
            if(j > n) break;
            a[j] = 1; 
        }
    }

    for(int i = 2; i <= n; i++)
    {
        if(a[i] == 0){
        if(n % i == 0){
            cnt++;
        }
          
        }
        
    }
    cout << cnt;

    return 0;
}