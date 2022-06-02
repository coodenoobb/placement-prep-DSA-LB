#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[] , int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];

        int j= i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        
    }
}
void printArray( int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"=============================="<<endl;
}

int main(){
    int arr[] = {14,20,6,7,81,30,2,40};
    int size = sizeof(arr)/sizeof(int);

    
    
    printArray(arr, size);

    insertionSort(arr,size);

    printArray(arr,size);

return 0;
}