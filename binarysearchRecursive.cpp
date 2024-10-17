#include <iostream>
#include<vector>
using namespace std;

int binarysearchRecursive(vector<int>&input,int target,int lo,int hi){
    /**
     *Time:O(logn)
     *Space:O(logn)//callstack space we can't stop,it included//logn fn call, space logn iterations used
     */
    if(lo>hi) return -1;//basecase crossover pointer
    int mid=(lo+hi)/2;
    if(input[mid]==target) return mid;
    if(input[mid]<target){
        return binarysearchRecursive(input,target,mid+1,hi);
    }else{
        return binarysearchRecursive(input,target,lo,mid-1);
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int>input;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        input.push_back(x);//add x
        }
        int target;
        cin>>target;
        cout<<binarysearchRecursive(input,target,0,n-1)<<"\n";
    return 0;
}
