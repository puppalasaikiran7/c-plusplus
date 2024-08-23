#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"enter the character : ";
    cin>>button;

    switch(button){
        case 'a':
        cout<<"hello"<<endl;
        break;

        case 'b':
        cout<<"namasthe"<<endl;
        break;

        case 'c':
        cout<<"salut"<<endl;
        break;

        case 'd':
        cout<<"hole"<<endl;
        break;

        case 'e':
        cout<<"ciao"<<endl;
        break;

        default:
        cout<<"i am still learning"<<endl;
        break;
    }

    //simple calculator 
    int num1,num2;
    cout<<"enter two numbers : ";
    cin>>num1 >>num2;

    char op;
    cout <<"enter the operator : ";
    cin>>op;

    switch(op){
        case '+':
        cout<<num1+num2<<endl;
        break;

        case '-':
        cout<<num1-num2<<endl;
        break;

        case '*':
        cout<<num1*num2<<endl;
        break;

        case '/':
        cout<<num1/num2<<endl;
        break;

        default:
        cout<<"enter another operator"<<endl;
        break;
    }
}