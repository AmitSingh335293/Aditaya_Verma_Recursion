#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void insert(stack<int>& st,int temp)
{
    if(st.size()==0 || st.top()<=temp)    // base condition
    {
        st.push(temp);
        return;
    }
    int val = st.top(); // hypothesis, reducing the input size
    st.pop();
	insert(st,temp);     
    
	st.push(val); // induction , inserting the val at its correct position
    return;
    
    }
void sort(stack<int>& st)
{
    if(st.size()==1)  // base condition 
    {
    return;
    }
    
    int temp = st.top();   // hypothesis , reducing the size of input
    st.pop();
    sort(st);
    
    insert(st,temp);     // induction , inserting the temp element at its correct positon in the sorted stack
    return;
}
int main() {
    stack<int> st;
    cout<<"Ener the size of stack: ";
    int n; cin>>n;
    for(int i=0;i<n;i++){
    	int num; cin>>num;
    	st.push(num);
	}
    
    sort(st);
    cout<<endl<<"Elements of stack after sorting\n";
    for(int i=0;i<n;i++){
    	cout<<st.top()<<endl;
    	st.pop();
	}
    
    return 0;

}
