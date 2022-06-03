#include<bits/stdc++.h>
using namespace std;
void printArr(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int checkSum(int arr[],int size){

    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    printArr(arr,size);
    cout<<endl;
    return arr[0]+ checkSum(arr+1,size-1);

    
}

int main(){

    int arr [4]={1,2,3,4};

    int size = 4;

    int sum = checkSum(arr,size);

    cout<<sum<<endl;

return 0;
}