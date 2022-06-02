#include<bits/stdc++.h>
using namespace std;
void sayDigits(int n,string arr[]){ 

    if(n==0){
        return ;
    }
    int dig = n%10;
    n=n/10;
    

    sayDigits(n,arr);
    cout<<arr[dig]<<" ";

}
int main(){
    string arr[10] = {"Zero","One","two","THree","Four","Five","Six","Seven","Eight","Nine"};

    int n;
    cin>>n;

    cout<<endl;
    sayDigits(n,arr);
    cout<<endl;

return 0;
}