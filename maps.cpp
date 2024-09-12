#include<bits/stdc++.h>
using namespace std;

void explainmap(){

    map<int,int> mpp;

    //inserting the values 
    mpp.insert({1,2});
    mpp.emplace(3,2);


    cout<<mpp[3]<<endl;

    for(auto el : mpp){
        cout<<el.first<<" "<<el.second;
    }
    cout<<endl;


    //another type 
    map<pair<int,int>,int> mppp;
    mppp[{2,3}]=10;

    for(auto el : mppp){
        cout<<el.first.first;
        cout<<el.first.second;
        cout<<el.second;
    }
}

int main(){

    explainmap();

}