// reverse a stack using recursion

#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>& st,int temp) 
{
   if (st.empty())    // base condition
   {
       st.push(temp);
       return;
   }
   int val = st.top();     // hypothesis, 
   st.pop();
   insert(st,temp);
   st.push(val);     // induction 
   return;
}
void reverse(stack<int>& st) 
{
    if(st.size()==1)  // base condition
    {
        return;
    }
   int temp = st.top();      // hypothesis, making input smaller
   st.pop();
   reverse(st);
   insert(st,temp);       // induction, inserting temp value in reversed stack
   return;
}

int main() {
    stack<int> st;
    cout<<"Enter the size of stack: ";
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int num; cin>>num;
        st.push(num);
    }
    
if(st.empty()) {
    return 0;
}
reverse(st);
    cout<<endl<<" Elements of stack after reversing are :\n";
    while(n--){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
