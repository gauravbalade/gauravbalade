#include <iostream>
using namespace std;
void fun(string);       //Func Prototype only used for if fn 1st)use,fn2nd)define &it will come first fn prtype otherwise for fn define 1st ,2nd use no need of fn prtype//
int addition(int,int);


void fun(string,name){
    cout<<"Are you having fun"<<name<<"?"<<"/n";
}
int addition(int x,int y){
    //processing
    int result=x+y;
    return result;
}
int main()
{
    fun("sanket");
    int response=addition(9,8);
    cout<<response;

    return 0;
}
