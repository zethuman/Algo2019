#include<iostream>

using namespace std;

int main(){
 int n, max = -1, min = 100;
 cin >> n;
 int a[n];

 for(int i = 0; i < n; i++){
     cin >> a[i];
 }

 for(int i = 0; i < n; i++){
     if(a[i] > max){
     max = a[i];
     }
     if(a[i] < min){
         min = a[i];
     }
 }

 for(int i = 0; i < n; i++){
     if(a[i] == min){
         a[i] = max;
     }
     if(a[i] == max){
         a[i] = min;
     }     

     cout << a[i] << " ";
 }



    return 0;
}