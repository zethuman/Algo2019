#include<iostream>

using namespace std;

long long Fact(int n){
    if( n == 0) return 0;
    if(n == 1) return 1;

    return n* Fact(n-1);
}

int main(){
   int n;
   cin >> n;

   cout << Fact(n);
}