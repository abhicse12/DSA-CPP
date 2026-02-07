#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0]; // अब तक का सबसे बड़ा सम
    int currentSum = 0; // करंट सम

    for (int num : nums) {
        currentSum += num; // करंट सम में अभी का नंबर जोड़ो
        if (currentSum > maxSum) {
            maxSum = currentSum; // अगर करंट सम बड़ा है तो मैक्स सम अपडेट करो
        }
        if (currentSum < 0) {
            currentSum = 0; // अगर करंट सम निगेटिव हो जाए तो उसे रीसेट कर दो
        }
    }

    return maxSum; // सबसे बड़े सम को रिटर्न करो
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Largest sum of a subarray is: " << maxSubArray(nums) << endl;
    return 0;
}
