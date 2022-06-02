#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number ";
    cin>>n; 
    int count = 1;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
return 0;
}