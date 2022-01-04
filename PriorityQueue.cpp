#include<iostream>
using namespace std;



class PriorityQueue
{
private:
    int SIZE=100004;
    int heap[100004]{0};
    int heapsize=0;
    void heapify(int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<heapsize and heap[l]>heap[largest])
    largest=l;
    if(r<heapsize and heap[r]>heap[largest])
    largest=r;

    if(largest!=i){
        swap(heap[i],heap[largest]);
        heapify(largest);
    }
}
public:
    
    void push(int data){
     if(heapsize>=SIZE)
    {
        cout<<"Overflow\n";
        return;
    }
    
    heap[heapsize] = data;    
    int curr = heapsize;
    heapsize += 1;
    


    while(curr>0 and heap[(curr-1)/2]<heap[curr])
    {
        int temp = heap[(curr-1)/2];
        heap[(curr-1)/2] = heap[curr];
        heap[curr] = temp;
        curr = (curr-1)/2;    
    }
    

    }
    int pop(){
          if(heapsize<=0)
    {
        cout<<"Underflow\n";
        return -1;
    }
    int curr = 0;    //Current index is 0 which is root (storing max element)
    int popped = heap[0];    //Save the element to be popped
    heap[0] = heap[heapsize-1];    //Copy last element to the root
    heapsize -= 1;
    heapify(0);
return popped;



    }

};


int main(){
    PriorityQueue pq;
    pq.push(1);
    pq.push(3);
    pq.push(5);
    pq.push(4);
    pq.push(6);
    pq.push(13);
    pq.push(100);
    pq.push(10);
    pq.push(9);
    pq.push(8);
    pq.push(15);
    pq.push(17);
    cout<<pq.pop();




}