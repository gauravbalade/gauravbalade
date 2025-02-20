#include <iostream> //hierarchical inheritance
using namespace std;

class Parent1{
    public:
    Parent1(){
        cout<<"Parent1 class"<<endl;
    }
};
class Parent2{
    public:
    Parent2(){
        cout<<"Parent2 class"<<endl;
    }
};
class child1:public Parent1{
    public:
    child1(){
        cout<<"child1 class"<<endl;
    }
};
class child2:public Parent1{
    public:
    child2(){
        cout<<"child2 class"<<endl;
    }
};
int main()
{
    child1 c1;
    child2 c2;
   return 0;
}
