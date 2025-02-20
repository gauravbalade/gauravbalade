#include <iostream>
using namespace std;

int addition(int x,int y){
    //processing
    int result=x+y;
    return result;
}
int main(){
    int x=addition(10,5); //15
    cout<<x<<endl;

    //or w/o using var x we can do it
    cout<<addition(10,5);  //15
    return 0;
}
