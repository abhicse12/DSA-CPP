#include <iostream>
#include<vector>
#include<list>
using namespace std;
class Graph{
    int V;
    list<int> *l;  // int *arr;
public:
    Graph(int V){
        this->V=V;
        l = new list<int> [V];

    }
void addEdges(int u,int v){
    l[u].push_back(v);
   
}
bool isCycleDfs(int curr,vector<bool>&vis,vector<bool>&recPath){
    vis[curr]=true;
    recPath[curr]=true;
    for(int v:l[curr]){
        if(!vis[v]){
            if(isCycleDfs(v,vis,recPath)){
                return true;
            }
        }else if(recPath[v]){
            return true;
        }
    }
    recPath[curr]=false;
    return false;


}
bool isCycle(){
    vector<bool> vis(V,false);
    vector<bool> recPath(V,false);
    for(int i=0;i<V;i++){
        if(!vis[i]){
            if(isCycleDfs(i,vis,recPath)){
                return true;
            }
        }

    }
    return false;
}
};
int main(){
    Graph g(4);
    g.addEdges(1,0);
    g.addEdges(0,2);
    g.addEdges(2,3);
    g.addEdges(3,0);
    cout<<g.isCycle()<<endl;
   
    
    return 0;

}