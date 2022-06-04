#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l, int h){

    int mid = l+(h-l)/2;

    int len1 = mid-l+1;
    int len2 = h-mid;

    int *first = new int [len1];
    int *second = new int [len2];

    //cpoy values to new array
    int mainArrayindex = l;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayindex++];
    }

    mainArrayindex = mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayindex++];
    }

    //merge 2 sorted array 
    int index1 = 0;
    int index2 = 0;
    mainArrayindex = l;

    while(index1 < len1 && index2< len2){
        if(first[index1]<second[index2]){
            arr[mainArrayindex++]=first[index1++];
        }
        else{
            arr[mainArrayindex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainArrayindex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainArrayindex++]=second[index2++];
    }
}


void mergeSort(int arr[],int l, int h){

    //base case
    if(l>=h){
        return ;
    }
    int mid = l+(h-l)/2;
    //left part sort
    mergeSort(arr,0,mid);
    //right part sort
    mergeSort(arr,mid+1,h);

    merge(arr,l,h);
}



int main(){


        int arr[8] = {90,50,36,4,7,58,2,5};
        int size = 8;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        mergeSort(arr, 0,size-1);

        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }

return 0;
}