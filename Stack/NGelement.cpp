#include <iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    vector<int>arr={6,8,0,1,3};
    //next greater element
    stack<int>s;
    vector<int>NG(arr.size(),0);
    for(int i=arr.size()-1;i>=0;i--){
        //removing invalid element
        while(s.size()>0 && s.top()<=arr[i]){
            s.pop();
        }
        if(s.empty()){
            NG[i]= -1;
        }else{
            NG[i]=s.top();
        }
        s.push(arr[i]);
    }
    //print next greater element
    for(int val : NG){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;

}