#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"------->>WELCOME TO SIMPLE CALCULATOR GAME<<---------";
    cout<<endl;
    cout<<"Enter 2 Operands:-"<<endl;
    float a,b;
    cout<<"Number 1: "<<endl;
    cin>>a;
    cout<<"Number 2: "<<endl;
    cin>>b;

    cout<<"Press \n(+)Addition \n(-)Subraction \n(*)Multiplication \n(/)Division"<<endl;
    cout<<"Enter the operator to continue the Arithmetic operation: ";
    
    char Ao;//Arithmetic operator
    cin>>Ao;
    
    switch(Ao)
    {
        case '+':
        cout<<a+b<<endl;
        break;
        
        case '-':
        cout<<a-b<<endl;
        break;
        
        case '*':
        cout<<a*b<<endl;
        break;
        
        case '/':
        cout<<a/b<<endl;
        break;
        
        default:
        cout<<"oops!No operator found..."<<endl;
    }
}
