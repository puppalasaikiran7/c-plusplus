#include<bits/stdc++.h>
using namespace std;

void dequeinsertingfromback(){

    deque<int> dq;

    dq.push_back(2);
    dq.push_front(1);

    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<endl;
    }
}

void dequeaccessing(){

    deque<int> dq={1,2,3,4,5,6,7,8,9};

    for(auto it=dq.begin();it!=dq.end();it++){
        cout<<*it<<endl;
    }

}

void dequeoperations(){

    deque<int> dq={1,2,3,4,5};

    //size()
    cout<<dq.size()<<endl;

    //pop_back()
    dq.pop_back();
    for(auto it=dq.begin();it!=dq.end();it++){
        cout<<*it<<endl;
    }

    //empty
    cout<<dq.empty();
}

void dequeerase(){

    deque<int> dq={1,2,3,4,5,6,7,8,9};

    dq.pop_front();

    dq.erase(dq.begin());

    for(auto it=dq.begin();it!=dq.end();it++){
        cout<<*it<<endl;
    }

}

int main(){

    dequeinsertingfromback();
    dequeaccessing();
    dequeoperations();
    dequeerase();
    
    return 0;

}