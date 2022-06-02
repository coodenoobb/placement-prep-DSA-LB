#include<bits/stdc++.h>
using namespace std;
int findSum(int arr[],int size){

    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;

}
int main(){

    int size;
    cout<<"Enter Size for Array : ";
    cin>>size;
    int array[100];
    for(int i=0;i<size;i++){
        cin>>array[i];

    }
    cout<<"Array"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";

    }

    cout<<endl;

    int value = findSum(array,size);
    cout<<value;
return 0;
}