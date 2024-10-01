#include<bits/stdc++.h>
using namespace std;

void printingpairs(){

    //int and int pairing 
    pair<int,int> pr1={1,4};
    cout<<pr1.first<<" "<<pr1.second<<endl;

    pair<int,char> pr2 ={1,'A'};
    cout<<pr2.first<<" "<<pr2.second<<endl;

    pair<pair<int,char>,int> pr3={{2,'A'},4};
    cout<<pr3.first.first<<" "<<pr3.first.second<<" "<<pr3.second<<endl;


}
int main(){
    printingpairs();
}