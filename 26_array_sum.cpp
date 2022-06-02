#include<bits/stdc++.h>
using namespace std;
int checkSum(int arr[],int size){

    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    int remains = checkSum(arr+1,size-1);
    int sum = arr[0]+remains;

    return sum;
}

int main(){

    int arr [8]={1,2,3,4};

    int size = 4;

    int sum = checkSum(arr,size);

    cout<<sum<<endl;

return 0;
}