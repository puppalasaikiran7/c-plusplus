#include <bits/stdc++.h>
using namespace std;

void twovaluestoring(){
    //storing 2 values using pair  
    pair<int,int> a={1,2};
    
    cout<<"a.first : "<<a.first<<endl<<"a.second : "<<a.second<<endl;
    
    //storing three values using pair
    pair<int,pair<int,int>> b={1,{2,3}};
    
    cout<<"b.first : "<<b.first<<endl<<"b.second.first : "<<b.second.first<<endl<<"b.second.second : "<<b.second.second<<endl;


    //we will creating the array using int , float etc but we can also create array using pair 

    pair<int,int> arr[] ={{1,2},{3,4},{5,6}};
    cout<<"arr[0].second : "<<arr[0].second<<endl<<"arr[1].first : "<<arr[1].first<<endl<<"arr[0].second : "<<arr[1].second<<endl;
}



int main()
{
    twovaluestoring();

    return 0;
}