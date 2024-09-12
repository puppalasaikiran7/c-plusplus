    #include<bits/stdc++.h>
    using  namespace std;

    int main(){

        //removing and inserting the elements in the array

        vector<int> v(5);

        for(vector<int>::iterator it=v.begin(); it!=v.end() ;it++){

            cin>>*it;
        }

        v.erase(v.begin()+1); //erasing the particular value ( 2 )
        v.erase(v.begin()+1,v.begin()+3); //erasing the two value ( 3 , 4 )

        cout<<"values after removing : ";
        for(vector<int>::iterator it=v.begin(); it!=v.end() ;it++){
            cout<<*it<<" ";
        }

        cout<<endl;



        //insert function 

        //inserting the value for single element
        
        v.insert(v.begin() +1,2);
        cout<<"values after inserting : ";
        for(vector<int>::iterator it=v.begin(); it!=v.end();it++){
            
            cout<<*it<<" ";
        }

        cout<<endl;


        //inserting 2 similar elements , example : {10,10}

        v.insert(v.begin()+2,2,3);   //in this the 2 means how many time the value needs to be inserted and 3 means what is the value that need to be inserted
        cout<<"2 similar values insertes : ";
        for(vector<int>::iterator it=v.begin() ; it!=v.end() ; it++){
            
            cout<<*it<<" ";
        }
        
        cout<<endl;

        //inserting the set of similar elements of same value using copy 
        vector<int> copy(5,50);
        v.insert(v.begin(),copy.begin(),copy.end());
        cout<<"copy function : ";
        for(vector<int>::iterator it=v.begin() ; it!=v.end() ;it++){
            
            cout<<*it<<" ";
        }

        cout<<endl;


        //inserting multiple elements 
        v.insert(v.begin(), {3, 4});    //we can add multiple elements to vector in this form


        return 0;



    }