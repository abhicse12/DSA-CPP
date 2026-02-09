#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int kadane(vector<int>&a){
    int currSum=a[0];
    int maxSum=a[0];
    for(int i=1;i<a.size();i++){
        currSum=max(currSum,currSum+a[i]);
        maxSum=max(currSum,maxSum);
    }
    return maxSum;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int &x:a) cin>>x;
    while(k--){
        int mn=min_element(a.begin(),a.end())-a.begin();
        int mx=max_element(a.begin(),a.end())-a.begin();
        if(mn<0 && mx>0){
            swap(a[mn],a[mx]);
        }

    }
    cout<<kadane(a);
    
    return 0;

}