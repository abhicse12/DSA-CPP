#include <iostream>
#include<vector>
#include<queue>
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
    l[v].push_back(u);
}
void bfs(){
    queue<int>Q;
    vector<bool> vis(V,false);

    Q.push(0);
    vis[0]=true;
    while(Q.size()>0){
        int u=Q.front();
        Q.pop();
        cout<<u<<" ";

        for(int v:l[u]){
            if(!vis[v]){
                vis[v]=true;
                Q.push(v);
            }

        }
    }
}
void dfsHelper(int u,vector<bool>&vis){
    cout<<u<<" ";
    vis[u]=true;
    for(int v:l[u]){
        if(!vis[v]){
            dfsHelper(v,vis);
        }
    }
}
void dfs(){
    int src;
    vector<bool> vis(V,false);
    dfsHelper(0,vis);
}
};
int main(){
    Graph g(5);
    g.addEdges(0,1);
    g.addEdges(1,2);
    g.addEdges(1,3);
    g.addEdges(2,4);
    cout<<"bsf : ";
    g.bfs();
    cout<<endl;
    cout<<"dfs : ";
    g.dfs();
    cout<<endl;
    
    return 0;

}