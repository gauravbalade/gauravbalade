#include <iostream>
using namespace std;
//(return_type int for add int)  (fn name add here)  (parameters)
    int add(int num1,int num2){  //imp both int para write
        int sum=num1+num2;//sum of both parameters
        return sum;   //VIMP define main fn above int main fn only!!

    }
    int main(){
        int a=5,b=4;        //Now Call Fn in Main Fn
        cout<<add(a,b)<<endl; //Pass int only in this fn,Not char// 
    //o/p=9
    return 0;
}
