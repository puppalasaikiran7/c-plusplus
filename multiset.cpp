#include<bits/stdc++.h>
using namespace std;

void explainmultiset(){

    //multiset  will accept the multiple values of single value.

    multiset<int> ms;

    //inserting 
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    //count
    cout<<ms.count(1);

    //erasing 
    ms.erase(1);  //this will erase all the values of 1 

    //if you want to erase the particular value you can use iterator to point to particular value using find
    auto it=ms.find(1);
    ms.erase(it);
    


}
int main(){

    explainmultiset();

}