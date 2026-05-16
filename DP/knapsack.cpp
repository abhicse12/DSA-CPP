#include <iostream>
#include <vector>
using namespace std;

long knapsack(int i, int w, int n, vector<long>& wt, vector<long>& val, vector<vector<long>>& dp) {
    
    // base case
    if (i == n) return 0;

    // memoization check
    if (dp[i][w] != -1) return dp[i][w];

    // not take
    long notTake = knapsack(i + 1, w, n, wt, val, dp);

    // take
    long take = 0;
    if (wt[i] <= w) {
        take = val[i] + knapsack(i + 1, w - wt[i], n, wt, val, dp);
    }

    return dp[i][w] = max(take, notTake);
}

void solve() {
    int n, w;
    cin >> n >> w;

    vector<long> wt(n), val(n);
    for (int i = 0; i < n; i++) {
        cin >> wt[i] >> val[i];
    }

    vector<vector<long>> dp(n, vector<long>(w + 1, -1));

    cout << knapsack(0, w, n, wt, val, dp);
}

int main() {
    solve();
    return 0;
}