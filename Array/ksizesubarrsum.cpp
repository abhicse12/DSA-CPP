#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,1,5,1,3,2};
    int n = 6, k = 3;

    int windowSum = 0;

    // first window
    for(int i=0;i<k;i++)
        windowSum += arr[i];

    int maxSum = windowSum;

    for(int i=k;i<n;i++){
        windowSum += arr[i];     // add next
        windowSum -= arr[i-k];   // remove old
        maxSum = max(maxSum, windowSum);
    }

    cout << maxSum;
}
