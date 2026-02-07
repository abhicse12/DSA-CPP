#include <iostream>
#include<queue>
#include<vector>
using namespace std;
typedef long long ll;  // using ll=long long;
int main(){
    int n;
    ll m;
    cin>>n>>m;
    vector<ll>v(n),d(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++) cin>>d[i];
    // max heap pair {current taste,decrease}
    priority_queue<pair<ll,ll>> pq;
    for(int i=0;i<n;i++){
        pq.push({v[i],d[i]});
    }
    ll ans=0;
    while(m-- && !pq.empty()){
        auto top=pq.top();
        pq.pop();
        ll taste=top.first;
        ll dec=top.second;
        if(taste<0) break;
        ans+=taste;
        ll newtaste=taste-dec;
        if(newtaste>0){
            pq.push({newtaste,dec});
        }
    }
    cout<<ans;
    return 0;

}