#include<bits/stdc++.h>
using namespace std;
void uniqueOccurrences(vector<int>& arr) {
    
        unordered_map<int,int>mp;
        set<int>ans;
      for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
        
      }
        cout<<mp.begin()<<endl;
      for(auto i=mp.begin();i!=mp.end();i++){
        ans.insert(i->second);
      }
      return ans.size()==mp.size() ?true:false;
        
      
    }

int main(){

    vector <int> vec={1,2,2,3,3,3,4};
    uniqueOccurrences(vec);
    
    cout<<"Done";
return 0;
}