#include <iostream>
#include<queue>

using namespace std;

int gcd(int a, int b){
   if(a == 0 || b == 0){
       return a + b;
   }
    return gcd(b, a%b);
}

int main(){
   int a,b;
   cin >> a >> b;
   cout << gcd(a,b);
}