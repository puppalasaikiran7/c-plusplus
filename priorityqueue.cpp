#include<bits/stdc++.h>
using namespace std;

void explainpriorityqueue(){
    priority_queue<int> pq;

//in this priority_queue the values will be inserted as per the priority means the highest value will be in the top .


    pq.push(1);
    pq.push(2);
    pq.push(3);

    pq.pop();  //pops the top most element 

    cout<<pq.top();//diplays the top most element 
}

int main(){

    explainpriorityqueue();

}