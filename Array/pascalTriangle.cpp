#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows){
    vector<vector<int>> ans;

    for(int i=1;i<=numRows;i++){
        vector<int> v=vector<int>(i,1);
        if(i>2){
            for(int j=1;j<i-1;j++){
                v[j]=ans[ans.size()-1][j-1]+ans[ans.size()-1][j];
            }
        }
        ans.push_back(v);
    }

    return ans;
}

int main(){
    vector<vector<int>>result=generate(5);
    for(auto row:result){
        for(int x:row){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
