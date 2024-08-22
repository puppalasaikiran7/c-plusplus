#include<iostream>
using namespace std;

int main(){
    cout<<"hello world"<<endl;
    cout<<"i am learning c++"<<endl;

    //data types 

    //short

    //int it is 4 bytes
    int a=10;
    int b=10;
    int sum=a+b;
    cout<<sum<<endl;

    //long  it is 4 bytes
    long e=238098;
    long f=23421;

    //long long 
    long long g=12342341234;
    long long h=2342341334;

 
    //float it is 4 bytes
    float c=20.34f;
    float d=34.65f;
    float sum1=c+d;
    cout<<sum1<<endl;

    //double it is 8 bytes 
    double k=234.23524d;

    //long double it is 8 bytes 
    long double l=234.235242313l;

    //char
    char character='A';
    cout<<character<<endl;

    //bool
    bool value=true;
    cout<<value<<endl;


    //finding the size of the datatypes 

    cout<<"short : "<<sizeof(short)<<endl;
    cout<<"int : "<<sizeof(int)<<endl;
    cout<<"long : "<<sizeof(long)<<endl;
    cout<<"long long : "<<sizeof(long long)<<endl;
    cout<<"float : "<<sizeof(float)<<endl;
    cout<<"double : "<<sizeof(double)<<endl;
    cout<<"long double : "<<sizeof(long double)<<endl;

    //taking input from the user 
    
    int a;
    cin>>a;
    cout<<a;






}
