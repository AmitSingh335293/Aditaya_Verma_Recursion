// tower of hanoi

#include<bits/stdc++.h>
using namespace std;
void solve(char s,char d, char h, int n)
 {
     if(n==1){ // base condition
         cout<<"moving disc 1 from " <<s <<" to "<< d<<endl;
         return;
     }
      solve(s,h,d,n-1); //  hypothesis , move top n-1 disc from s to h using d
     cout<<"moving disc "<< n << " from "<< s <<" to " << d <<endl; // induction , move last remaining disc from s to d 
    solve(h,d,s,n-1);
    
    

 }
int main() {
int n;
cin>>n;
char s,d,h;
s='A';
h='B';
d='C';

solve(s,d,h,n);  // move discs from s to d using h
    return 0; 
}
