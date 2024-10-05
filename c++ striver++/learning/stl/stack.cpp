#include<bits/stdc++.h>
using namespace std;

void stackbasic(){

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    //accessing the elements in the stack 
    cout<<st.top();

    //removing the elements from the stack 
    st.pop();

    cout<<endl;

    cout<<st.top();

    //this will print the elements from the stack 
    while(st.empty()==false){
        cout<<st.top()<<" ";
        st.pop();
    }
    
}



int main(){

    stackbasic();
    return 0;

}