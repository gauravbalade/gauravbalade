#include<iostream>
using namespace std;
int main(){
    int n;           //Sum of first 'n' natural no.s
    cin>>n;
    int sum=0;              //make var to store sum
    for(int i=1;i<=n;i++){   //i=1,Natural No.s starts from 1//
        sum+=i;             //Inside loop sum=sum+1    
    }
    cout<<"Sum:"<<sum<<endl;
    return 0;
}