#include <iostream>
using namespace std;
void printNum(int n){
    if(n==1){        // base case 
        cout<<1<<endl;
        return;
    }
    
    cout<<n<<endl;
    printNum(n-1);
        
    }

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int sumN(int n){
    if(n==1){
        return 1;
    }
    return n+sumN(n-1);
}

int main(){
    int n=4;
    printNum(n);
    cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
    cout<<"Sum of natural numbers from 1 to "<<n<<" is "<<sumN(10)<<endl;
    
    return 0;

}