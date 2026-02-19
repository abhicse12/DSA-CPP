#include <iostream>
using namespace std;
int fib(int n){
        if(n==0 || n==1){
            return n;
        }
        return fib(n-1)+ fib(n-2);
    }
int main(){
    cout<<fib(6);
    
    
    return 0;

}

// memoization
#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int>& dp) {
    if(n <= 1) return n;

    if(dp[n] != -1) return dp[n];

    return dp[n] = fib(n-1, dp) + fib(n-2, dp);
}

int main() {
    int n = 10;
    vector<int> dp(n+1, -1);

    cout << fib(n, dp);
}


// tabulation
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 10;

    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n];
}


//most optimized

#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int a = 0, b = 1;

    for(int i=2;i<=n;i++){
        int c = a + b;
        a = b;
        b = c;
    }

    cout << b;
}
