#include<iostream>
using namespace std;
int main(){
    int i,j,a,b,n,h,k;
cin>>a;
cin>>b;
for(i=1;i<=a;i++){
    for(j=1;j<=i;j++){
cout<<"*";
    }
    cout<<endl;

}
cin>>n;
for(i=1;i<=n;i++){
for(j=1;j<=n-1;j++){
    cout<<"$";

}
cout<<endl;
}
cin>>h>>k;
for(i=1;i<=h;i++){
for(j=1;j<=k;j++){
    cout<<"*";
}
cout<<endl;
}
 return 0;
}