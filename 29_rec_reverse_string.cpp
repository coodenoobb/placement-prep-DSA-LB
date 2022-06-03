#include<bits/stdc++.h>
using namespace std;
int numSum(int n){

    if(n==0){
        return 0 ;
    }
    return ((n)+numSum(n-1));

}

int main(){
    int n;
    cin>>n;
    int ans = numSum(n);

    cout<<ans;
return 0;
}