#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i){
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n and arr[l]>arr[largest])
    largest=l;
    if(r<n and arr[r]>arr[largest])
    largest=r;

    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void BuildHeap(int arr[],int n){

int LastNonLeafNode=n/2-1;

for(int i=LastNonLeafNode;i>=0;i--){
    heapify(arr,n,i);

}
}

int main(){

int n=11;

int arr[n]={1,3,5,4,6,13,10,9,8,15,17};

BuildHeap(arr,n);

int heapSize=n;
for(int i=n-1;i>0;i--){
    swap(arr[0],arr[i]);
    heapSize--;
    heapify(arr,heapSize,0);
}
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<endl;
}

}