#include <iostream>
#include <vector>
// #include <pair>
using namespace std;
int main(){
    // pair<int,pair<char,int>>p={1,{'a',3}};
    // cout<<p.first<<endl;
    // cout<<p.second.first<<endl;

    vector<pair<int,int>> vec={{1,2},{3,4}};
    vec.push_back({5,6});  //insert into vector
    vec.emplace_back(6,7);  //in-place object create
    for(auto p : vec){
        cout<<p.first<<" "<<p.second<<" "<<endl;
    }
    
    
    return 0;

}