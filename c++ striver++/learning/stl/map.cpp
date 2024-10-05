#include<bits/stdc++.h>
using namespace std;

void mapexplain(){

    map<int,string> mpp;
    
    //inserting the values in the map

    map<int,string> mppp={ {1,"saikiran"},{2,"shanmukh nath"},{3,"gangadhar"},{4,"harsha vardhan"},{5,"gopal"},{6,"biil gates"} };

    //mostly use this way it is easy , its like list in python     
    mpp[1]="saikiran";
    mpp[2]="shanmukh nath";
    mpp[3]="gangadhar";
    mpp[4]="harsha vardhan";
    mpp.insert({5,"gopal"});

    //no duplicat values will be store instead the values will be updated
    //example mpp[1]="saikiran puppala" then this will get updated to the position of 1.

    //accessing the values from the map 
    for(auto  it :mppp){
        cout<<it.first<< "->" <<it.second<<endl;
    }

    cout<<endl;

    auto itt=mpp.find(2);
    cout<<(*itt).first<<"->"<<(*itt).second<<endl;

}

int main(){
    mapexplain();
    return 0;
}