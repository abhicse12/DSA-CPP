#include <iostream>
using namespace std;
// string isprime(int n){
//     for(int i=2;i*i<n; i++){
//         if(n%i==0){
//             return "Non prime number";
//         }
//     }
//     return "prime number";
// }

// void printdigit(int n){
//     int sum=0;
//     while(n!=0){
//         int digit=n%10;
//         sum+=digit;
//         n=n/10;
//     }
//     cout<<sum<<endl;
// }
// bool isArmstrong(int n){
//     int copyN=n;
//     int sumofcube=0;
//     while(n!=0){
//         int dig=n%10;
//         sumofcube+=(dig*dig*dig);
//         n=n/10;
//     }
//     return sumofcube==copyN;
// }


//GCD
// int gcd(int a , int b ){
//     while(a > 0 && b > 0){
//         if(a > b){
//             a=a%b;
//         }else{
//             b=b%a;
//         }
//     }
//     if(a==0) return b;
//     return a;
// }

// GCD with recursion
// int gcdRec(int a, int b){
//     if(b==0) return a;
//     return gcdRec(b,a%b);
    
// }

// int lcm(int a , int b){
//     int gcd=gcdRec(a,b);
//     return a*b/gcd;
// }

//REverse a number
int revNum(int n){
    int rev=0;
    while(n>0){
        int dig=n%10;
        
    }

}

int main(){
//     int n=153;
//    if(isArmstrong(n)){
//     cout<<"Number is ArmStrong"<<endl;
//    }else{
//     cout<<"Number is not Armstrong"<<endl;
//    }
 
// cout<<lcm(20,28)<<endl; 
int n=4376;
cout<<revNum(n);
   


    return 0;
}