#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void solve (stack<int>& st, int k) {
   if(k==1){
   st.pop(); // base condition
   return;
   }
   
   int temp = st.top();   // hypothesis , making the input smaller
   st.pop();
   
  solve(st,k-1);          // induction
   st.push(temp);
   return;
}

int main() {
     stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5); 
//    st.push(6);
    int k = (st.size()/2 + 1 );  // finding the middle element
   
     solve(st,k);
     int size = st.size();
     for(int i=0;i<size;i++){
     	cout<<st.top()<<endl;
     	st.pop();
	 }
    

    return 0;
}
