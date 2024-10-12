#include <iostream>
using namespace std;
//a raised to b find // a^b=a*a*a*a*a*a*a ......b times multiply using a//

int main()          //therefore LOOP ( 1 TO b )
{ int a,b;
cin>>a>>b;
int result=1;
for(int i=1;i<=b;i++){
    result*=a;  //result=result*a//
}
cout<<result;
    return 0;
}
