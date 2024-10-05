#include<bits/stdc++.h>
using namespace std;

void queuebasics(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    while(q.empty()==false){
        cout<<q.front()<<" ";
        q.pop();
    }


    
}

int main(){

    queuebasics();
    return 0;

}