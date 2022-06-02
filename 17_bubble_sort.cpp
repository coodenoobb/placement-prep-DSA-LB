#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[] , int n){
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
          swap(arr[i],arr[j]);
        }
      }
    }



}
void printArray( int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[] = {14,20,6,7,81,30,2,40};
    int size = sizeof(arr)/sizeof(int);

    
    
    printArray(arr, size);
    cout<<endl;
    cout<<"=============================="<<endl;
    bubbleSort(arr,size);
    cout<<endl;
    cout<<"=============================="<<endl;
    printArray(arr,size);

return 0;
}