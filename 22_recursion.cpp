#include<bits/stdc++.h>
using namespace std;
void reachHome(int src,int des){
    
    cout<<"Source is "<<src<<endl;
    //base case
    if(src==des){
        cout<<"reached"<<endl;
        return;
    }
    
    src++;
    //recursice call
    reachHome(src,des);
}
int main(){

    int src =1;
    int des =10;

    cout<<endl;
    reachHome(src,des);


return 0;
}