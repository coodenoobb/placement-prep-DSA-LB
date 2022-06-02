#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortArray(int arr[], int n){
    int left =0 , right = n-1;

    while(left<right){
        if(arr[left]==0 && left<right){
            left++;
        }
        if(arr[right]==1){
            right--;
        }

        swap(arr[left],arr[right]);
        left++;
        right--;

        if(left<right){
            left++;
            right--;
        }

    }
}
int main(){ 
    int arr[7]={0,1,0,1,1,0,1};

    printArray(arr,7);
    sortArray(arr,7);
    printArray(arr,7);

    

return 0;
}