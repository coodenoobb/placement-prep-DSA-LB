#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int size, int key){

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
    int key = 205;

    bool ans = linearSearch(arr,size,key);

    if(ans){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found";
    }


return 0;
}