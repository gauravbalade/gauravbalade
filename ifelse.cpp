#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"enter the score:"<<endl;
    cin>>score;
    //score>80,print well done
    //score=50-80,print can improve
    //score<50,print poor performance

if(score>80){
    cout<<"Well Done!"<<endl;
}
else if(score>50){
    cout<<"can improve"<<endl;
}
else{
    cout<<"poor performance"<<endl;

}
return 0;
}