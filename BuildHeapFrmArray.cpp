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

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
BuildHeap(arr,n);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<endl;
}
}