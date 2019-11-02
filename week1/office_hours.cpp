#include<iostream>

using namespace std;

int main(){
   
    int balance = 0;
    string str;
    cin >> str; 
    bool isFirst = false;

    for(int i = 0; i < str.size(); i++)
    {
         if(str[0] == ')'){
             isFirst = true;
             cout << "No";
             break;
             return 0;
        }
        else if(str[i] == '('){
            balance++;
        }
        else if(str[i] == ')'){
            balance--;
        }
        else if(balance == 0){
            cout << "No";
            return 0;
        }
    }

    if( balance == 0 and !isFirst){
        cout << "Yes";
    }
    else if(balance != 0)
    cout << "No";


}