#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlt(int arr[],int size){

    for(int i=0;i<size;i=i+2)
    if(i+1<size){
        swap(arr[i],arr[i+1]);
    }

}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int brr[5]={10,20,30,40,50};

    printArray(arr,6);
    printArray(brr,5);

    swapAlt(arr,6);
    swapAlt(brr,5);

    printArray(arr,6);
    printArray(brr,5);

return 0;
}