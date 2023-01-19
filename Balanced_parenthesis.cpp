#include<bits/stdc++.h>
using namespace std;
void solve(int open,int close ,string op,vector<string>& v) {
    if(open==0 && close==0) {
        v.push_back(op);
        return;
    }
    if(open!=0) {   // when open!=0 then we had always the choice of open bracket 
    string op1 = op;
    
    op1.push_back('(');
    solve(open-1,close,op1,v);
    }
    if(close>open)  // so close bracket choice is possible when close > open , when open == close then we can't use ) choice, and close can never be less than open
    {
        string op2 = op;
        op2.push_back(')');
        solve(open,close-1,op2,v);
        // return;
    }
}

int main(){
	int n;
	cin>>n;
    int open = n  , close = n;
    string op="";
    vector<string>v;
	solve(open,close,op,v);
	cout<<"Total possible solutions: "<<v.size()<<endl;
	for(int i=0;i<v.size();i++) cout<<v[i]<<endl;
	return 0;
}

