#include<iostream>
#include<map>
#include<stack>

using namespace std;

int main(){
    map<char,char> m;
    stack<char> st;
    bool isEmpty = false;
    string s;
    cin >> s;

    m['('] = ')';
    m['{'] = '}';
    m['['] = ']';
     
    for(int i = 0; i < s.size(); i++) {
    if(st.empty()){
        isEmpty = true;
        st.push(s[i]);
    }
    if(m[st.top()] == s[i]){
         st.pop();
    }
    else if(!isEmpty)
    { 
        st.push(s[i]);
    }

      isEmpty = false;
    
    }
    if(st.empty()){
        cout<< "Yes";
    }
    else cout << "No";
return 0;

}