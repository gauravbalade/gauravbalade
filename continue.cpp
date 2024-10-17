#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=50;i++){
        if (i%3==0){
            continue;
        }
        cout<<i<<endl; //else print i.

    }
    return 0;
}