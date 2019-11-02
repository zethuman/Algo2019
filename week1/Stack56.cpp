#include <iostream>

using namespace std;

int a[10000000], sz = 0;


void push(int n) {
	a[sz] = n;
	sz++;
	cout << "ok\n";
}

void pop() {
    if(sz <= 0){
	cout << "error\n";
    }
    else if(sz > 0){
        cout << a[sz-1] << "\n";
        sz--;
    }
    
}


void back() {
    if(sz <= 0){
	cout << "error\n";
    }
    else if(sz > 0 ){
      cout << a[sz-1] << "\n";
    }

}

void size() {
	cout << sz << "\n";
}

void clear() {
	sz = 0;
	cout << "ok\n";
}

void exit() {
	cout << "bye\n";
}


int main()
{
	string q;
	int x;

	do
	{
		cin >> q;
		if(q == "push"){
			cin >> x;
			push(x);
		}
		if(q == "pop"){
			pop();
		}
		if(q == "back"){
			back();
		}
		if(q == "size"){
			size();
		}
		if(q == "clear"){
			clear();
		}
		if(q == "exit"){
			exit();
		}
	}
	while(q != "exit");
	return 0;
}