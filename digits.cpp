#include <iostream>
using namespace std;
//to count Number of digits till 10 digits count
int main()
{
    int n;
    cin>>n;
    int digits=0; //To store the digits of num make var
                   //make loop till num=0
    while(n>0){        //if num=0,finish loop
        digits++;    //1//2//3
        n=n/10;      //6//6//0
                     // 0 out of while loop
                    
    }
    cout<<digits<<endl;   //print out of loop since condition got false
    return 0;
}
