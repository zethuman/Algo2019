#include <iostream>
#include <algorithm>

using namespace std;


int main(int argc, char const *argv[]) // Bubble sort
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
    }

    for(int j = 0; j < n ; j++){
                cout << a[j] << " ";
        }
    
    return 0;
}
