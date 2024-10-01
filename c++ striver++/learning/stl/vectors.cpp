#include<bits/stdc++.h>
using namespace std;

void vectorsinsertionfromback(){
    vector<int> v1;
    
    //to insert the values in the vector 
    v1.push_back(1);
    v1.emplace_back(2);

    //accessing the elements normally
    cout<<v1[0]<<" "<<v1[1]<<endl;

    //finding the size of the vector
    cout<<v1.size()<<endl;

    //accessing the elements using for loop
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }       
}


void vectorsaccessing(){

    vector<int> v2;

    v2.emplace_back(1);
    v2.emplace_back(2);
    v2.emplace_back(3);
    v2.emplace_back(4);
    v2.emplace_back(5);


    //accessing the first element from the vector
    vector<int>::iterator it =v2.begin();
    cout<<*it<<endl;
    
    //accessing the last vector 
    vector<int>::iterator itt=v2.end();
    itt--;
    cout<<*itt<<endl;


    //accessing the elements through iterator using for loop
    
    for(vector<int>::iterator it=v2.begin();it!=v2.end();it++){
        cout<<*it<<endl;
    }

    //using for each loop 
    for(auto i:v2){
        cout<<i<<endl;
    }

    //accessing the vector reversly using reverse iterator 
    for(auto it=v2.rbegin();it!=v2.rend();it++){
        cout<<*it<<endl;
    }

}


void vectoroperations(){

    vector<int> v(5,20);
    
    //removing the elements from the back
    //pop_back()
    v.pop_back();
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    cout<<endl;

    //swaping the vectors
    vector<int> v1={6,7,8};
    v.swap(v1);
    
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }


    //finding the size of the vector 
    cout<<v.size()<<endl;

    //empty
    //this will say if the vector is empty by saying "1" for "yes its empty" and "0" for "no its not empty"
    cout<<v.empty();
}

void vector_erase(){

    vector<int> v={1,2,3,4,5,6,7,8,9};

    ////erasing the values 

    //erasing first value
    v.erase(v.begin());
    for(auto it:v){
        cout<<it<<endl;
    }

    //erasing third value because afterremoving first element 2 will become first and +1 of that is 3
    v.erase(v.begin()+1);
    for(auto it:v){
        cout<<it<<endl;
    }

    cout<<endl;

    //erasing the set of elements 
    v.erase(v.begin(),v.begin()+3);
    
    for(auto it:v){
        cout<<it<<endl;
    }
}

void vector_insert(){

    vector<int> v={1,3,4,5};
    
    //inserting the values from start

    //inserting single value 
    v.insert(v.begin()+1,2);
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    cout<<endl;

    //inserting two similar values in the vector 
    v.insert(v.end(),2,6);
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

}



int main(){

    vectorsinsertionfromback();
    vectorsaccessing();
    vectoroperations();
    vector_erase();
    vector_insert();


    return 0;
}
