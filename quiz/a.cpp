#include<iostream>
#include<stack>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n=s.size();
    stack<char> st;

    for(int i = 0; i < n; i++){
        char c = s[i];
        if(!st.empty() && st.top() == c)
        st.pop();
        else{
            st.push(c);
        }
    }
    if(st.size() == 0){
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    

    return 0;
}