#include <iostream>
#include <vector>  //v.imp
using namespace std;

int main()
{
    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    cout<<"Enter x:";
    int x;
    cin>>x;

    int occurrence=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurrence=i;
        }
    }
    cout<<"Last occurrence: "<<occurrence<<endl;

    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            occurrence=i;
            break;
        }
    }
    cout<<"First occurrence: "<<occurrence<<endl;
    
    return 0;
}
