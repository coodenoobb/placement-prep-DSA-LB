#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[] , int n){
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }swap(arr[i],arr[minIndex]);
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

    selectionSort(arr,size);

    printArray(arr,size);

return 0;
}