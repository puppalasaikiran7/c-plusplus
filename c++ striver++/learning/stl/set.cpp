#include<bits/stdc++.h>
using namespace std;

void setbasic(){

    set<int> st;
    st.insert(1);
    st.insert(3);
    st.insert(2);
    st.insert(4);
    st.insert(5);

    auto it=st.find(2);
    if(it!=st.end()){
        cout<<*it<<endl;
    }

    

    //count 
    cout<<st.count(2)<<endl;


}

void seterasing(){
    set<int> st={1,2,3,4,5,6,7,8,9};

    //erasing the element from the set
    st.erase(3);
    auto itt=st.find(3);
    if(itt!=st.end()){
        cout<<*itt<<endl;
    }
    
    //using another method
    auto it=st.end();
    it-- ;
    it--;
    st.erase(it);
    
    for(auto ittt=st.begin();ittt!=st.end();ittt++){
        cout<<*ittt<<endl;
    }

    //erasing the set of elements from the set 
    auto it1=st.begin();
    it1++;

    auto it2=st.end();
    it2--;
    it2--;
    it2--;
    st.erase(it1,it2);

    for(auto it3=st.begin();it3!=st.end();it3++){
        cout<<*it3<<endl;
    }
}

void setlowerbound(){

    set<int> st={2,21,12,211,213};
    auto it=st.lower_bound(11);
    cout<<*it<<endl;
    
}

void setupperbound(){
    set<int> st={2,21,12,211,213};
    auto it=st.upper_bound(12);
    cout<<*it<<endl;
}

int main(){
    setbasic();
    seterasing();
    return 0;

}