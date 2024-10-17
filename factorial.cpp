#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int factorial=1;//initialized with 1 v.imp//& vimp to store factorial//
    for(int i=1;i<=n;i++){
        factorial*=i; //fact=fact*i//1=1*1=1//2//3//4
        cout<<factorial<<endl;
    }
    return 0;
}
