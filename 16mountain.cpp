#include<bits/stdc++.h>
using namespace std;
int findPivot(int arr[], int size){

    int l=0;
    int h=size-1;
    int mid = l+(h-l)/2;

    while(l<h){
        if(arr[mid]>=arr[0]){
            l=mid+1;
        }
        else{
            h=mid;
        }
        mid = l+(h-l)/2;
    } 
    return l-1;

}

int main(){

    int arr[7]={6,7,9,1,2,3,4};
    
    cout<<"Pivot is "<<findPivot(arr,7);
return 0;
}