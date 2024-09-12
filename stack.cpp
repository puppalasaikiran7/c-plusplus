#include<bits/stdc++.h>
using namespace std;

void stackexplain(){
    stack<int> st;
    
    st.push(1);
    
    st.push(2);
    
    st.push(3);
    
    st.push(4);
    
    
    
    cout<<st.top();   // this will the last element in the stack because the stack follows
                      // lifo (last in first out )
    
    cout<<st.size();
    
    
}

int main(){

    //stacks
    stackexplain();
}