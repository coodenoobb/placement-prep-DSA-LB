#include<bits/stdc++.h>
using namespace std;
int countDistinctWayToClimbStair(long long nStairs)
{

    //base case
    
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }
    
    return (countDistinctWayToClimbStair(nStairs-1)+countDistinctWayToClimbStair(nStairs-2));
     
}
int main(){

return 0;
}