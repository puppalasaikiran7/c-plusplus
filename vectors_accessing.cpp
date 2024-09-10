#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v={1,2,3,4};

    //1st method
    cout<<v[0]<<endl;

    //2nd method
    //using iterators   ( this does not iterates instead it just point to the address  and after using of * in the cout the value will be pointed)

    //1st iterator ( container[vector] or [map].begin() )
    vector<int>::iterator it=v.begin();   //initializing the iterator , v.begin is one iterator 

    it++;  //incrementing the value 

    cout<<*(it)<<" "<<endl;   //* will point to the value of the iterator 

    it++;

    cout<<*(it)<<" "<<endl;


    //2nd iterator ( container[vector]or[map].end() )
    //this will point the iterator after the value of vector we have to do itt-- to get into the vector

    vector<int>::iterator itt=v.end();

    itt--;

    cout<<*(itt)<<" "<<endl;

    //we can access the vectors using iterators like this 

    vector<int> r={1,2,3,4,5,6,7};

    for(auto  it =r.begin(); it!=r.end(); it++){   //auto will take the data type automatically , we need to type vector<int>::iterator in the place of auto in this particular code
        cout<<*(it)<<endl;
    }

    


}