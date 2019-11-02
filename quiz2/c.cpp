#include <bits/stdc++.h>

using namespace std;


void merge(string arr[], int l, int m, int r){
    int i,j,k;
    int n1 = m - l + 1;
    int n2 = r - m;

    string L[n1], R[n2];

    for(i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
        i = 0;
        j = 0;
        k = l;
        while(i < n1 && j < n2)
        {
            if (L[i].size() <= R[j].size())
            {
                arr[k] = L[i];
                i++;
            }
            else 
            {
                arr[k] = R[j];
                j++;
            }
            k++;
        } 
        while(i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }
        while(j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
   
   void mergesort(string arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}



string a[51];
string str;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
        getline(cin, str);
        for(int i =1; i <=t; i++){
            int n = 0;
            getline(cin, str);
            string s;
            for(int i = 0; i < str.size(); i++){
                if(isalpha(str[i])){
                    s.push_back(str[i]);
                }
                else{
                    a[++n] = s;
                    s = "";
                }
            }
            if(s.size() > 0)
            a[++n] = s;
            mergesort(a, 1, n);

            for(int i = 1; i<= n; i++){
                cout << a[i] << " ";
                cout << endl;
            }
        }
    return 0;
}
