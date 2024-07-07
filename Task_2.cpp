#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char operation;
    cout<<"enter a first number :- ";
    cin>>a;
    cout<<"enter a second number :- ";
    cin>>b;
    cout<<"enter the operation = '+','-','*','/' :- ";
    cin>>operation;
    if(operation =='+')
    {    
        cout<<a+b;
    }
    else if(operation =='-')
    {
        cout<<a-b;
    }
    else if(operation =='*')
    {
            cout<<a*b;
    }
    else if(operation =='/')
    {
            cout<<a/b;
    }
    else
    {
        cout<<"Error!";
    }
    return 0;
}
