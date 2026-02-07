#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string,int> m;
    m["laptop"]=100;
    m["tv"]=10;
    m["phone"]=50;
    m["ac"]=120;
    m["watch"]=100;
    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
    
    return 0;

}