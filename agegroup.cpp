#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;

    if(age<12){
        cout<<"Child"<<endl;
    }
    else if(age>60){           //v.imp REORDER IS IMP for Senior it was printing Adult .
                                //therefore order is imp According to our given question
                                //if above 18 age will be first then senior will print adult that's why sequence is important
        cout<<"Senior"<<endl;
    }

    else if(age>18){
        cout<<"Adult"<<endl;
    }
    else{
        cout<<"Teenager"<<endl;
    }
    return 0;

}