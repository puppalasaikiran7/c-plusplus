#include<bits/stdc++.h>
using namespace std;

void multimapexplain(){

    multimap<int,char> mmp;

    //you cannot insert the value in multimap using [] , you can only insert it using {}

    mmp.insert({3, 'b'});
    mmp.insert({1, 'a'});
    mmp.insert({1, 'b'});
    mmp.insert({1, 'a'});
    mmp.insert({2, 'a'});
    mmp.insert({2, 'a'});
    mmp.insert({2, 'b'});

    //accessing the values from the unordered map 
    for(auto it:mmp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    cout<<endl;

    
    //finding the single value 
    auto it=mmp.equal_range(2);
    for(auto i=it.first; i!=it.second; i++){
        cout<<(*i).first<<"->"<<(*i).second<<endl;
    }

}

int main(){
    multimapexplain();
    return 0;

}