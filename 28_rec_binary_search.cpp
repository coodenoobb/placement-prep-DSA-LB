#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[], int l,int h){

    for(int i=l;i<=h;i++){
        cout<< arr[i] <<" ";
    }cout<<endl;
}

bool binarySearch(int arr[],int l,int h, int key){

    printArray(arr,l,h);

    if(l>h){
        return false;
    }
    int mid = l+(h-l)/2;
    cout<<"MID "<<arr[mid]<<endl;
    cout<<endl;

    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]<key){
        return binarySearch(arr,mid+1,h,key);
    }
    else{
        return binarySearch(arr,l,mid-1,key);
    }

}
int main(){
    
    int arr[9]= {1,2,3,4,5,6,7,8,9};
    
    int key = 9;

    bool ans = binarySearch(arr,0,8,key);

    cout<<"Present or not "<<ans;

return 0;
}