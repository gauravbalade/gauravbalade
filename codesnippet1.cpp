#include<iostream>
using namespace std;
int main(){

    int value=2;
    switch(value){
        case 1:
        case 2:
        case 3:           //Since,Break statement is not their case & case 3 will execute
        cout<<"Physics Wallah"<<endl;
        break;
        default:
        cout<<"Default Option"<<endl;
    }
    return 0;
}