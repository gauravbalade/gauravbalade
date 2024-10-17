#include <iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,4,9,5};
    int*ptr=(arr+2);
    cout<<*ptr<<" "<<ptr<<"\n";//precedence ++>*  = *(ptr++)
    *ptr++;
    cout<<*ptr<<" "<<ptr<<"\n";
    *ptr--;
    cout<<*ptr<<" "<<ptr<<"\n";
    return 0;
}
