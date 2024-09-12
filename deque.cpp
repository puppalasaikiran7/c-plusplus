#include<bits/stdc++.h>
using namespace std;

int main(){

    //deque
    deque<int>  dq;

    dq.push_back(1);

    dq.emplace_back(2);

    dq.push_front(3);

    
    
    dq.pop_back();

    dq.pop_front();

    for(int el : dq){
        cout<<el;
    }

    cout<<endl;

    cout<<dq.back();
}