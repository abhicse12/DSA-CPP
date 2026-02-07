#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int>arr,int tar,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        
        if(arr[mid]==tar) return mid;
        if(arr[mid]<=tar){
            return binary_search(arr,tar,mid+1,end);
        }else{
            return binary_search(arr,tar,st,mid-1);
        }
    }
    return -1; //tar not found in arr
}
int main(){
    vector<int>arr={2,4,6,8,10,12};
    int tar=10;
    int n=arr.size();
    int st=0,end=n-1;
    cout<<binary_search(arr,tar,st,end)<<endl;

    
    return 0;

}