#include<bits/stdc++.h>
using namespace std;
int searchBi(int arr[],int size,int ele){

    int l=0;
    int h= size-1;

    int  mid= l+(h-l)/2;

    while(l<=h){
        if(arr[mid]==ele){
            return mid;
        }
        else if(arr[mid]>ele){
            h=mid-1;
        }
        else if(arr[mid]<ele){
            l=mid+1;
        }

        mid=l+(h-l)/2;
    }
    return -1;

}

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int brr[7]={2,4,5,9,10,12,13};

    int ans = searchBi(arr,8,8);
    cout<<ans<<endl;
    int ans2 = searchBi(brr,7,13);
    cout<<ans2;

return 0;
}