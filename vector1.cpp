#include <bits/stdc++.h>
using namespace std;

int main(){

    //creating the vector
    //this is dynamic in nature , we can increase the size of the vector if we dont know the size of the vector 
    
    vector<int> a;  //this will just create the empty container 

    //to insert the value in the vector
    a.push_back(1);

    a.emplace_back(5);    //this is faster than the push_back


    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;

    //in this the vector can insert 2 values
    vector<pair<int,int>> v;

    v.push_back({1,2});

    v.emplace_back(3,4);    //this doesnot require any curley braces to be inserted

    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<" ";
    }

    cout<<endl;

    vector<int> b (5,100);  //creating the vector of size 5 , all initialized to value 100 and you can always increase the size of the vector by using push_back or emplace_back
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";    //this will give [100 100 100 100 100] as the output .
    }


    vector <int> c(5); //this is creating the vector with the size of 5 

    //if you want to copy the vector from one to another you can use this
    vector<int> d(5,20);
    vector<int> e(d);   //this just makes the copy of the d not refers to the values of d vector
    
}