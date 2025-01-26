#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
    //creation
map<string,int>m;
    //insertion
    //1
    pair<string,int>p=make_pair("babbar",3);
    m.insert(p);
    pair<string,int>pair2=("love",2);
    m.insert(pair2);

    m["mera"]=1;
    m["mera"]=2;
    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;
    cout<<m.at("unknown key ")<<endl;
    cout<<m.size()<<endl;
    cout<<m.count("bro")<<endl;
     map<string,int> :: iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;

}