#include <iostream>
#include <vector>

using namespace std;

class MinHeap{
    public:
    int sz;
    vector<int> a;

    MinHeap(){
        sz = 0;
    }

    int parent(int i){
         return (i - 1) / 2;
    }

    int left(int i){
        return 2*i + 1; 
    }

    int right(int i){
        return 2*i + 2;
    }

    int  getMin(){
       return a[0];
    }
    
    int getMax(){
        int maxi = a[0];
        for(int i = 0; i < sz; i++){
            maxi = max(maxi, a[i]);
        }
        for(int i = 0; i < sz; i++){
            if(maxi == a[i]){
                return i;
            }
        }
        return -1;
    }


    void insert(int k ){     // O(logN)
        a.push_back(k);
        sz++;
        int i = sz - 1;
        while(i > 0 && a[parent(i)] > a[i]){
           swap(a[parent(i)], a[i]);
           i = parent(i);
        }
    }

    void heapify(int i){   // O(logN)
        if(left(i) > sz - 1)
            return;
        int j = left(i);
        if(right(i) < sz && a[j] > a[right(i)]){
            j = right(i); 
        }
        if(a[i] > a[j]){
            swap(a[i],a[j]);
            heapify(j);
        }
    }

    int  ExtractMin(){    // O(logN)
       int mini = a[0];
       swap(a[0], a[sz - 1]);
       sz--;
       heapify(0);
       return mini;
    }

    int extractMax(){
        int indexofmax = getMax();
        int maxim = a[indexofmax];
        swap(a[indexofmax],a[sz - 1]);
        sz--;
        heapify(0);
        return maxim;
    }

    void decKey(int i, int new_value){  // O(logN)
        a[i] = new_value;
        while(i > 0 && a[parent(i)] > a[i]){
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
    }

    void incKey(int i, int new_value){  //O(logN)
         a[i] = new_value;
         heapify(i);
    }

    void print(){
        for(int i = 0; i < sz; i++)
            cout << a[i] << " ";
        cout << endl;
        
    }
};

int main()
{
    MinHeap  *minheap = new MinHeap();
    int n,k;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> k;
        minheap->insert(k);
    }

  
   for(int i = 0; i < n; i++){
       cout << minheap->getMax() << " " <<  minheap->extractMax()<<endl;
       // minheap->extractMax() ;
       //minheap->print();
   }
   //cout << minheap-> getMax()
   //minheap->incKey(2,5);
   //minheap->print();
   //minheap->extractMax();
   //minheap->print();
    return 0;
}
