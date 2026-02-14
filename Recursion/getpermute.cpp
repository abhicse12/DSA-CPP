#include <iostream>
#include<vector>
using namespace std;
void permute(vector<int>&nums,vector<vector<int>>&ans,int idx){
    if(idx==nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=idx;i<nums.size();i++){
        swap(nums[idx],nums[i]);
        permute(nums,ans,idx+1);
        swap(nums[idx],nums[i]);  // backtracking
    }

}
int main(){
    vector<int>nums={1,2,3};
    vector<vector<int>>ans;
    permute(nums,ans,0);
    for(auto  val:ans){
        for(auto x:val){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    
    return 0;

}