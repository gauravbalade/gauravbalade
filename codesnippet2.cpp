#include<iostream>
using namespace std;
int main(){
    int x=60,y=90;
    if(y%x==0){   //bad     //90/60 {R is not equal to 0} it is 90 divided by 0
    cout<<"Good"<<endl;
    }else{
    cout<<"Bad"<<endl;
    }
    if(y%x==10){     
    cout<<"Good"<<endl;
    }else if (y-x==30){         //neutral
    cout<<"Neutral"<<endl;
    }else{
    cout<<"Bad"<<endl;
    }
    if(y*x==540&&x+y==150){//bad//v.imp DON'T TAKE 2ND SINCE,FIRST IS FALSE (S.C CASE) 
    cout<<"Good"<<endl;  //correct syntax for assignment is = (single equal sign), but in this case, we need to compare the values. So, it should be y * x == 540.
    }else{
    cout<<"Bad"<<endl;
    }
    if(y*x==540||x+y==150){ //F||T is T (In logical OR 1st is F  then proceed)
    cout<<"Good"<<endl;  //he expression x + y = 150 is incorrect. It should be x + y == 150
    }else{
    cout<<"Bad"<<endl;
    }
}
