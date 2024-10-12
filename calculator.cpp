#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter 2 inntegers:";
    cin>>n1>>n2;

    cout<<"Enter an operator(+,-,*,/,%):";
    char op;//v.imp Var name cannot be used as keyword//
    cin>>op;               //take input from user {operator-char datatype//v.imp}

//To know which operator we use //which character//
//Using Switch cae,
//break statement is imp


switch(op){              //switch inside()op  & cin>>op
    case '+':
    cout<<"Sum is:"<<n1+n2<<endl;
    break;
    case '-':
    cout<<"Difference is:"<<n1-n2<<endl;
    break;
    case '*':
    cout<<"Product is:"<<n1*n2<<endl;
    break;
    case '/':
    cout<<"Division is:"<<n1/n2<<endl;
    break;
    case '%':
    cout<<"Remainder is:"<<n1%n2<<endl;
    break;
    default:
    cout<<"Enter a valid operator"<<endl;        //Executes when none of 5 operators found(input) V.imp
    break;

     
}
return 0;
}