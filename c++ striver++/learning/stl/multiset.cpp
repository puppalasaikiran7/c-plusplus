#include <bits/stdc++.h>
using namespace std;

void multisetexplain(){

    multiset<int> ms;

    //inserting the values in the multiset
    ms.insert(2);
    ms.insert(1);
    ms.insert(12);
    ms.insert(1);
    ms.insert(21);
    ms.insert(1);
    ms.insert(1);

    //accessing the values from the multiset
    for(auto it:ms){
        cout<<it<<endl;
    }

    cout<<endl;

    //retriving the single value of multiple values  in the multiset
    auto it=ms.find(1);
    cout<<*it<<endl;

}

void multiseterasing(){

    multiset<int> ms={2,5,8,42,78,2,2,2};
    
    //erasing multiple values from the multiset
    auto it=ms.erase(2);
    for(auto itt:ms){
        cout<< itt <<" ";
    }

    //erasing single number from multiple values from the multiset
    auto it =ms.erase(ms.find(2));
    for(auto itt:ms){
        cout<<itt<<endl;
    }

}

int main(){

    multisetexplain();
    cout<<endl;
    multiseterasing();
    return 0;

}