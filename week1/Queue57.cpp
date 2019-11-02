#include<iostream>
#include <vector>

using namespace std;

vector<int> v;
int sz = 0;

void push(int in){
    v.push_back(in);
    cout << "ok\n";
}

void pop(){
        cout << v[sz++] << "\n";
}

void front(){
     cout << v[sz] << "\n";
}

void exit(){
    cout << "bye\n";
}

void size(){
    cout << v.size() - sz << "\n";
}

void clear(){
    sz = 0;
    v.clear();
    cout << "ok\n";
}

int main(){
    string str;
    int in;

    do{
        cin >> str;

        if(str == "push"){
            cin >> in;
            push(in);
        }
        if(str == "exit"){
            exit();
        }
        if(str == "size"){
            size();
        }
        if(str == "front"){
            front();
        }
        if(str == "clear"){
            clear();
        }
        if(str == "pop"){
            pop();
        }
    }
    while(str != "exit");
    return 0;
}