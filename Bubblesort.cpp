#include<iostream>
#include<vector> //v.imp
using namespace std;
void BubbleSort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){  //if wrong order swap
                swap(v[j],v[j+1]);
            }
        }
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
    cin>>v[i];
}
BubbleSort(v);
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";

}cout<<endl;
return 0;
}
