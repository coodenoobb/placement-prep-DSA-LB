#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<< arr[i] <<" ";
    }cout<<endl;
}

bool linearSearch(int arr[],int size, int key){
    cout<<"Size is "<<size<<endl;
    printArray(arr,size);

    //base case
    if(size==0){
        return false;
    }

    if(arr[0]==key){
        return true;
    }
    else{
        bool rem = linearSearch(arr+1,size-1,key);

        return rem;
    }
}
int main(){

    int arr[5] = {10,20,30,40,50};

    int size =5;
    int key = 50;

    bool ans = linearSearch(arr,size,key);

    if(ans){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found";
    }


return 0;
}