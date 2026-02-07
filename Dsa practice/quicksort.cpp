#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>&arr ,int st,int end){
    int idx=st-1,piv=arr[end];
    for(int j=st;j<end;j++){
        if(arr[j]<piv){
            idx++;
            swap(arr[j],arr[idx]);
            return idx;
        } 
    }
    idx++;
    swap(arr[end],arr[idx]);
}
void quickSort(vector<int>&arr ,int st,int end){
    if(st<end){
        int pivIdx=partition(arr,st,end);
        quickSort(arr,st,pivIdx-1); //left small arr
        quickSort(arr,pivIdx+1,end); //right small arr   
    }
}
int main(){
    vector<int>arr={12,31,35,8,32,17};
    quickSort(arr,0,arr.size()-1);
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;   
    return 0;
}