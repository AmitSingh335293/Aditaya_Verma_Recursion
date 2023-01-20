// Josephus Problem 

#include<bits/stdc++.h>

using namespace std;
void solve(vector<int>& v,int k, int index,int &ans) {
    if(v.size()==1){  // base condition
        ans = v[0];
        return;
    }
    index = (index+k)%(v.size());    // hypothesis making the input small
    v.erase(v.begin()+index);
    solve(v,k,index,ans); 
    return;
}
int main() {
    int n,k;
    cin>>n;
   
    cin>>k;
    vector<int> v;
    for(int i=1; i<=n; i++) {
        v.push_back(i);
    }
    k = k-1;   // since 0 based indexing so if k=3 then  person at index 2  will be killed
    int index = 0;
    int ans = -1;
    solve(v,k,index,ans);
    cout<<ans;
    return 0;
}



   
