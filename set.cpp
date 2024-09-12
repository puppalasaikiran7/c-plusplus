#include<bits/stdc++.h>
using namespace std;

void explainset(){
    set<int> s;

    //inserting the value 
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);


    //erasing the element
    s.erase(3);

    //finding the element 
    auto it=s.find(2);
    cout<<*it<<endl;

    //counting the values 
    cout<<s.count(1);
    



}

int main(){
    explainset();

}