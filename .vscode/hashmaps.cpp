#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    //creation
    unorderd_map<string, int> m;
    //insertion
    //1
    pair<string, int> p= make_pair("love",3 );
    m.insert(p);
   
    m["babbar"]=1;
    //what will happen
    m["mera"]=2;
    cout<<m["love"]<<endl;
    cout<<m["babbar"]<<endl;
    cout<<m.at("babbar")<<endl;
    cout<<m("unknownkey")<<endl;
    //size
    cout<<m.size()<<endl;

    return 0;
}
