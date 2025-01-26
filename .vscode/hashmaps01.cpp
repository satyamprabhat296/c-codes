#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    //creation
    map<string,int>m;
    //insertion
    //1
    pair<string,int>p=make_pair("babbar",3);
    m.insert(p);
    //2
    pair<string,int>pair2("LOVE",2);
    m.insert(pair2);
    //3
    m["mera"]=1;
    //what will happen
    m["mera"]=2;
    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;
     
    //size
    cout<<m.size()<<endl;
    //to check presence
    cout<<m.count("bro")<<endl;
    //iteration
    map<string,int> :: iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;

}