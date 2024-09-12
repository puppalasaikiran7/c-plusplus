#include<bits/stdc++.h>
using namespace std;

int main(){
    //creating the list 

    list<int> li={1,2,3,4};

    list<int> l;


    l.push_back(1);     //this will push the value from the back 
    l.emplace_back(2);


    //push_front
    l.push_front(3);     //this will push the value from the front 

    
    for(int el : l){
        cout<<el;
    }

    //inserting two elements in one single position using pair and list

    list<pair<int,int>> p;
    p.push_back({3,4});
    p.emplace_back(5,7);


    for(int ep :p){
        cout<<ep;
    }

    //all the functions that you have seen in last vector file all are similar 


    
}