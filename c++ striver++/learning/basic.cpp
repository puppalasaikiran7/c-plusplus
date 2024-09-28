#include<bits/stdc++.h>
using namespace std;

void print(){
    cout<<"this is a print function example";
}

void passbyvalue(int x){
    x=x+5;
}

void passbyreference(int &y){
    y=y+5;
}

//creating the class
class Solution{
public:
    void printing(int n1){
        cout<<"n1 is : "<<n1<<endl;
    }
};

int main(){
    
    //data types 
    
    //int (-10^9 to 10^9)
    int max_num=INT_MAX;
    int min_num=INT_MIN;
    cout<<"int max "<<max_num<<endl<<"int min "<<min_num<<endl;

    //long (-10^12 to 10^12)
    long max_long=LONG_MAX;
    long min_long=LONG_MIN;
    cout<<"long max "<<max_long<<endl<<"long min "<<min_long<<endl;

    //long long (-10^18 to 10^18)
    long long max_longlong=LLONG_MAX;
    long long min_longlong=LLONG_MIN;
    cout<<"long long max "<<max_longlong<<endl<<"long long min "<<min_longlong<<endl;


    //float (can store upto 7 decimal places )
    float num=23.4;
    cout<<num<<endl;

    double num2=23.24523;
    cout<<num2<<endl;

    //character 
    char ch='a';
    cout<<ch<<endl;

    //string
    string st="saikiran";
    cout<<st<<endl;


    //taking input from the user 
    
    //int input 

    //single int value
    int num5;
    cin>>num5;
    cout<<num5<<endl;

    //taking double int value
    int num3, num4;
    cin>>num3>>num4;
    cout<<num3<<endl<<num4<<endl;


    //string input 

    //this will only take one single word as the string 
    string str;
    cin>>str;
    cout<<str<<endl;

    //taking multiple string word after there is space 
    //getline 
    string str1;
    getline(cin,str1);
    cout<<"str1 : "<<str1<<endl;

    string str2,str3;
    getline(cin,str2);
    getline(cin,str3);
    cout<<"str2 : "<<str2<<endl<<"str3 : "<<str3<<endl;


    //if else conditions 
    int age;
    cin>>age;

    if(age>=18){
        cout<<"adult";
    }
    else {
        cout<<"teen";
    }

    //if else if 
    
    //problem 1 
    int age;
    cin>>age;

    if(age>=18){
        cout<<"adult";
    }
    else if(age<18 && age>=10){
        cout<<"teen";
    }
    else {
        cout<<"child";
    }

    
    //problem 2 
    int marks;
    cin>>marks;

    if(marks>=90 && marks<=100){
        cout<<"GRADE A"<<endl;
    }
    else if(marks>=70 && marks<90){
        cout<<"GRADE B"<<endl;
    }
    else if(marks>=50 && marks<70){
        cout<<"GRADE C"<<endl;
    }
    else if(marks>=35 && marks<50){
        cout<<"GRADE D"<<endl;
    }
    else{
        cout<<"FAIL";
    }

    //problem 3 
    int a,b,c;
    cin>>a>>b>>c;

    if(a>=b){
        if(a>=c){
            cout<<"a is greater than other two values"<<endl;
        }
        else{
            cout<<"c is greater than a"<<endl;
        }
    }
    else {
        if(b>c){
            cout<<"b is greater than other two values"<<endl;
        }
        else{
            cout<<"c is greater"<<endl;
        }
    }

    //switch case 
    int day;
    cin>>day;

    switch(day){
        case 1:
            cout<<"monday"<<endl;
            break;
        case 2:
            cout<<"tuesday"<<endl;
            break;
        case 3:
            cout<<"wednesday"<<endl;
            break;
        case 4:
            cout<<"thursday"<<endl;
            break;
        case 5:
            cout<<"friday"<<endl;
            break;
        case 6:
            cout<<"saturday"<<endl;
            break;
        case 7:
            cout<<"sunday"<<endl;
            break;
        default:
            cout<<"invalid input"<<endl;
            break;
    }

    //for loop 
    int value;

    for(int i=0 ; i<=10 ;i++){
        cin>>value;
        cout<<value<<endl;
    }

    //while loop 
    int i=5;
    while(i<50){
        cout<<i<<endl;
        i++;
    }

    //do while 
    int n=5;
    while(n<50){
        cout<<n<<endl;
        n++;
    }

    //arrays 
    int arr[3];
    int arraysize = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<arraysize;i++){
        cin>>arr[i];
        cout<<arr[i]<<endl;
    }

    //strings
    string s="saikiran";
    //size function in string
    cout<<s.size()<<endl;

    //functions 
    print();

    //pass by value and pass by reference 
    int number=5;
    passbyvalue(number);
    cout<<number<<endl;

    int number1=5;
    passbyreference(number1);
    cout<<number1<<endl;
    
    //creating the instance for the class 
    Solution Sol;
    int n1;
    cin>>n1;
    Sol.printing(n1);


    //to find the length of the string we can use .length() or .size() 
    //to access the character in the string we can use string[string.length()-1]


    return 0;
}