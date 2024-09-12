#include<bits/stdc++.h>
using namespace std;

int main(){

    //size
    vector<int> v(5,20);
    cout<<v.size()<<endl;

    //pop_back
    //removes the last element 
    v.pop_back();
    for(auto it=v.begin() ;it!=v.end();it++){
        cout<<*it<<endl;
    }

    //swap 
    vector<int> b={3,4,5};
    v.swap(b);

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }

    //empty , this will print 0 if there are values in the vector and will print 1 if there are no values in the vector 
    //prints 1 (true) there are not elements in vector
    //prints 0 (false) there are elements in vector 
    cout<<v.empty();


    //clear()
    v.clear();   //this will clear the entire vector 


    

    




}