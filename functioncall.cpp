#include <iostream>
using namespace std;
int addition(int x,int y){
    //processing
    int result=x+y;
    return result;
}
void fun(string name){
    cout<<"Are you having fun"<<name<<"?"<<"\n";
}
int main(){

fun("sanket");
int response=addition(9,8);//17
cout<<response;
    return 0;
}
