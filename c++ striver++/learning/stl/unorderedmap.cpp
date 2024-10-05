#include<bits/stdc++.h>
using namespace std;

void unorderedmap(){

    unordered_map<int,string> um;


    //inserting the values in the unordered map 
    um[1]="saikiran";
    um[2]="akshit";
    um[3]="prateet";
    um[4]="varun";
    um[5]="bharath";
    

    //accessing the values from the unordered map 
    //this will print the values in unordere format its coming in the reverse format when you observer 

    for(auto it:um){
        cout<<it.first<< "->" <<it.second<<endl;
    }

}

int main(){
    unorderedmap();

    return 0;
}