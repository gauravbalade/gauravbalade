#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<5;i++){
        cout<<i<<",";//V.IMP 1,2,3,4,
    }

int j=0;
for(int j=1;j<5;j++){

}
cout<<j<<endl; //NOT INSIDE FOR LOOP 'i'
//for loop mei i declare kiya hai ,and bahar bhi declare kiya hai.(Scope of var inside loop is inside only)
//loop ke Ander i=1,value Memory Allocate Hota Hai,& Then Outside the loop Memory Dellocates i.e Var Scope Ends

int a=1;
while (a<4){
    cout<<a<<"";
    a++;
}
}

