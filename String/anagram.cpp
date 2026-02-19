#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isAnagram(string a,string b){
    if(a.size()!=b.size()) return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    return a==b;
}
int main(){
    string a="listen";
    string b="silent";
    cout<<isAnagram(a,b);
    
    return 0;

}