// Print N - Bit binary numbers having more 1's than 0's for any prefix

#include<bits/stdc++.h>

using namespace std;
void solve(int one,int zero,string op,int n) { // one , zero and n are i/p and o/p is o/p
    if(n==0) {
        cout<<op<<endl;
        return;
    }
    string op1 = op;
    string op2 = op;
    op1.push_back('1');    // choice of 1 is always there
    solve(one+1,zero,op1,n-1);
    if(one>zero) {          // choice of 0 is when no of 1 > no of zeros only
        op2.push_back('0');
        solve(one,zero+1,op2,n-1);
//        return;
    }
}
int main() {
    int n;
    cin>>n;
    int one = 0;
    int zero = 0;
    string op = "";
    solve(one,zero,op,n);

    return 0;
}
