#include<bits/stdc++.h>
using namespace std;
int main(){

	vector<int> vec = {1,2,3,4,5,6,7,8};

	sort(vec.end(),vec.begin());
	cout<<"Sorted"<<endl;
	for(auto it: vec){
		cout<<it<<endl;
	}

return 0;
}