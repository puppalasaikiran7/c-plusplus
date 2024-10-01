#include<bits/stdc++.h>
using namespace std;

void listinsertingfromback(){

    list<int> ls;

    ls.push_back(1);
    ls.emplace_back(2);

    for(int i=0;i<ls.size();i++){
        cout<<i<<" ";
        cout<<endl;
    }
}

void listaccessing(){

    list<int> ls={1,2,3,4,5,6,7,8,9};

    for(list<int>::iterator it=ls.begin();it!=ls.end();it++){
        cout<<*it<<" ";
    }

    cout<<endl;

    for(auto i:ls){
        cout<<i<<endl;
    }

    cout<<endl;

    for(auto it=ls.rbegin();it!=ls.rend();it++){
        cout<<*it<<endl;
    }
}

void listoperations(){

    list<int> ls={1,2,3,4,5,6,7,8,9};
    
    //size of the list
    cout<<ls.size()<<endl;

    //pop_back
    ls.pop_back();
    for(auto it:ls){
        cout<<it<<endl;
    }

    //empty
    cout<<ls.empty();

    //swap()
    list<int> ls1={37,86,72};
    ls.swap(ls1);

    for(auto itt:ls){
        cout<<itt<<endl;
    }
}

void list_pushingfromfront(){

    list<int> ls={3,4};

    ls.push_front(1);
    for(auto it=ls.begin();it!=ls.end();it++){
        cout<<*it<<endl;
    }
}

void listerase(){

    list<int> ls={1,2,3,4,5,6};

    //erasing the first element
    auto it=ls.begin();
    ls.erase(it);

    //erasing the third element
    auto itt=ls.begin();
    advance(itt,1);
    ls.erase(itt);

    for(auto it=ls.begin();it!=ls.end();it++){
        cout<<*it<<endl;
    }  
    //2 4 5 6

}



int main(){
    listinsertingfromback();
    listaccessing();
    listoperations();
    listerase();
}