#include<iostream>

using namespace std;

int main(){
    int n, closest = 2000,index;
    cin >> n;
    int a[n];

 for(int i = 0; i < n; i++){
     cin >> a[i];
 }

     cin >> k;

for(int i = 0; i < n; i++){
    //if(a[i] == k) {cout << k;}
    if(closest > abs(a[i] - k)){
        closest = abs(a[i] - k);
        index = i;
    }
}
 cout << a[index] << " ";

    return 0;
}