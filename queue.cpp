#include<bits/stdc++.h>
using namespace std;

void explainqueue(){

    //this will follow fifo ( first in first out )

    queue<int> q;

    q.push(1);

    q.emplace(2);
    
    q.push(3);

    q.back() += 2;
    
    cout<<q.back();   //displaying the last element 
    
    cout<<endl;
    
    q.pop();
    
    cout<<q.front();   //displaying the front element or first element



}


int main(){
    
    explainqueue();

    //swap , size , empty are same as stack 

    
}