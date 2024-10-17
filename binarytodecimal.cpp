#include <iostream>
using namespace std;

int main()
{
    int n,power=1,ans=0;
    cin>>n;              //Binary no. from User like 101,1011
    while(n>0){  //n/10 at Everytime To Remove Lastdigit i.e divide by 10
        int lastdigit=n%10;   //loop 1,Last digit exact ,*2,2.store
        ans+=lastdigit*power;//loop 2,Removing lastdigit before digit we get Till I/P=0//
        power*=2;   //Removing Lastdigit & *2 //add//
        n/=10;//n=n/10 this is  mean
    }
    cout<<ans<<endl;
    return 0;
}
