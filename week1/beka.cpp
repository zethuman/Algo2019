#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    // Node *prev;

    Node(int data) {
        this->data = data;
        next = NULL;
        // prev=NULL;
    }
};
class Queue{
    public:
    Node *tail, *head;
    int sz;
    Queue(){
        tail=head=NULL;
        sz=0;
    }

    void push(int data) {
        Node *node = new Node(data);
        if (tail == NULL) {
            head = node;
            tail = node;        
        } else {
            tail->next = node;
            tail = node;
        }
        sz++;
    }
    void pop()
    {
        // if(head!=NULL)
        // {
            sz--;
            head=head->next;
        // }
    }
    int front()
    {
        return head->data;
    }
    // bool empty()
    // {
    //     return sz == 0;
    // }
    int size()
    {
        return sz;
    }
    void clear()
    {
        head=NULL;
        tail=NULL;
        sz=0;
    }
};
int main()
{
    Queue *queue = new Queue();
    string s;
    do{
        cin>>s;
        int n;
        if(s=="push")
        {
            cin>>n;
            queue->push(n);
            cout<<"ok\n";
        }
        if(s=="pop")
        {
            cout<<queue -> front()<<"\n";
            queue -> pop();
        }
        if(s=="front")
        {
            cout<<queue->front() << "\n";
        }
        if (s=="size")
        {
            cout<<queue->size()<<"\n";
        }
        if (s=="clear")
        {
            queue->clear();
            cout<<"ok\n";
        }
        if(s=="exit")
        {
            cout<<"bye\n";
            break;
        }
    }
    while(s!="exit");
    return 0;
}