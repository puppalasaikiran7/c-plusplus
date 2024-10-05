#include<bits/stdc++.h>
using namespace std;

void priorityqueue(){

    priority_queue<int> pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);

    //prints the highest element
    cout<<pq.top();

    //prints the elements from highest to lowest
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    
}

void priorityqueue1(){
    priority_queue<int,vector<int>,greater<int>> pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);

    //prints the lowest element
    cout<<pq.top();

    //prints the elements from lowest to highest
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }

}

int main(){
    priorityqueue();
    cout<<endl;
    priorityqueue1();


}