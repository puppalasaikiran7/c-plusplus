#include<bits/stdc++.h>
using namespace std;

void explainsort(){

    int arr[5]={4,1,7,3,0};
    int size=sizeof(arr)/sizeof((arr[1]));
    
    //printing values before sorting
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //sorting the values using sort function
    sort(arr,arr+size);

    //printing the values after sorting
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //sorting a specific set of values from particular index to particular index
    sort(arr+1,arr+4);
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void explainaccumilate(){

    int arr[5]={6,2,1,7,0};
    int size= sizeof(arr)/sizeof(arr[1]);
    //in this we need to start summing the values from the starting to ending and then summing it by 0 
    cout<<accumulate(arr,arr+size,0);

}

void explaincount(){

    int arr[5]={6,2,1,1,0};
    int size=sizeof(arr)/sizeof(arr[1]);
    int num=1;

    cout<<count(arr,arr+size,num);
}

void explainfind(){

    int arr[5]={6,2,1,1,0};
    int size=sizeof(arr)/sizeof(arr[1]);

    //using pointers 
    auto it=find(arr,arr+size,1);
    cout<<*it<<endl;

}

void explain_next_permutation(){

    string st="abc";
    int size=st.size();
    do{
        cout<<st<<endl;
    }
    while(next_permutation(st.begin(),st.begin()+size));
}

void explain_previous_permutation(){

    string st="cba";

    int size=st.size();

    do{
        cout<<st<<endl;
    }
    while(prev_permutation(st.begin(),st.begin()+size));
}

void explain_maxelement(){

    int arr[5]={12,83,65,10};

    int size=sizeof(arr)/sizeof(arr[1]);

    auto it =max_element(arr,arr+size);
    
    cout<<*it<<endl;
}

void explainreverse(){

    int arr[]={7,6,5,10,9};
    int size=sizeof(arr)/sizeof(arr[1]);
    reverse(arr,arr+size);

    for(int i :arr){
        cout<<i<<endl;
    }
}

//over riding the comperator to reverse the order
bool comperator(int a , int b){
    
    if(a<b){
        return false;
    }
    else{
        return true;
    }
}

void explaincomperators(){
    
    int arr[]={5,6,1,2};
    
    int size=sizeof(arr)/sizeof(arr[1]);
    
    sort(arr,arr+size,comperator);
    
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
    
    
}

bool comperator1(pair<int,int> el1 , pair<int,int> el2){
    
    if(el1.second>el2.second) return true;
    if(el1.second<el2.second) return false;
    if(el1.first<el2.first) return true;
    return false;
    
    
    
}

void explaincomperator1(){
    
    pair<int,int> arr[]={{1,6},{1,5},{2,6},{2,9},{3,9}};
    
    sort(arr,arr+5,comperator1);
    
    for(int i=0;i<5;i++){
        cout<<"{"<<arr[i].first<<","<<arr[i].second<<"}"<<endl;
    }
    
}



int main(){
    explainsort();
    explainaccumilate();
    explaincount();
    explainfind();
    explain_next_permutation();
    explain_previous_permutation();
    explainreverse();
    explaincomperators();
    explaincomperator1();
    
    return 0;
}