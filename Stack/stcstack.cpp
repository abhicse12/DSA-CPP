#include <iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> ll;
    ll.push(10);
    ll.push(20);
    ll.push(30);
    while(!ll.empty()){
        cout<<ll.top()<<" ";
        ll.pop();
    };
    
    return 0;

}