#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int size){

    if(size==0|| size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr+1, size-1); 
        return remainingPart;
    }

}

int main(){

    int arr [8]={1,2,3,4,5,60,7,8};

    int size = 8;


    bool ans = isSorted(arr,size);
    if(ans){
        cout<<"TRUE";
    }
    else{
        cout<<"False";
    }
return 0;
}