#include<iostream>
using namespace std;
int main(){
int course=2;
    switch(course){
        case 1:                 //V.IMP If BREAK STATEMENT IS MISSING IN ALL THE CASES
        cout<<"java"<<endl;   
        break;          //i.e Remaing all also gets executed together the next 
        case 2:
        cout<<"python"<<endl;
        break;
        default:
        cout<<"cpp"<<endl;
        break;
    }
    return 0;
}