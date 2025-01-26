#include<iostream>
using namespace std;
class hero{
    //properties
    public:
    int health;
    char level;

    void print(){
        cout<<level<<endl;
    }


};


int main(){
    //creation of object
    hero ramesh;
    ramesh.health=70;
    ramesh.level='a';

    cout<<"health is:"<< ramesh.health <<endl;
    cout<<"level is:"<< ramesh.level <<endl;
   // cout<<"size : "<<sizeof(h1)<<endl;

    return 0;
}