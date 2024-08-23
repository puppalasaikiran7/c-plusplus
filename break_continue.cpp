#include<iostream>
using namespace std;

int main(){
    int pocketmoney=3000;
    for (int days=1; days<=30;days++){
        if(days%2!=0){
            pocketmoney=pocketmoney-30;
        }
        if(days%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout<<"days "<<days<<": you can go out today"<<endl;
        cout<<"pocketymoney :"<<pocketmoney;
    }

    //continue


    for(int i=2;i<100;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }


    //break 
    //prime numbers are those which are divisible by 1 and the number itself
    int n;
    cin>>n;
    int i;

    for(i=2 ; i<n ; i++){
        if(n%i==0){
            cout<<"non prime number"<<endl;
            break;
        }
    }
    if(n==i){
        cout<<"prime number"<<endl;
    }


    //prime numbers between two numbers 
    int a , b;
    cin>>a>>b;
    
    for(int num=a;num<b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(num==i){
            cout<<num<<" prime number"<<endl;
        }

    }
}