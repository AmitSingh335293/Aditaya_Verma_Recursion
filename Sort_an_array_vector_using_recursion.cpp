// sort an array/vector using recursion IBH method
#include<bits/stdc++.h>
using namespace std;


// function to insert the temp element at its correct position
void insert(vector<int>&v,int temp){
    if(v.size()==0 || v[v.size()-1]<=temp){    // base condition
        v.push_back(temp);
        return;
    }
    
    int val = v[v.size()-1];      // hypothesis
    v.pop_back();
    insert(v,temp);
    
    v.push_back(val);  // induction , inserting the val element back into the v at its correct position
}

// function to sort the array
void sort(vector<int> &v){
    if(v.size()==1)  // base condition
     return;
     
    int temp = v[v.size()-1];     // hypothesis ,reducing the size by storing the last element
     v.pop_back();
     sort(v);
     
    insert(v,temp);       // induction, inserting the temp element at its correct position
}



int main() {
    vector<int> arr;
    cout<<"Ener the size of arr/vector: ";
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int num; cin>>num;
        arr.push_back(num);
    }
    
    sort(arr);
    cout<<endl<<"Array elements after sorting "<<endl;
     for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
