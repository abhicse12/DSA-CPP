#include <iostream>
#include <vector>

using namespace std;

pair<int, pair<int, int>> maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = 0;
    int start = 0;
    int tempStart = 0;
    int end = 0;

    for (int i = 0; i < nums.size(); i++) {
        currentSum += nums[i];

        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }

        if (currentSum < 0) {
            currentSum = 0;
            tempStart = i + 1;
        }
    }

    return {maxSum, {start, end}};
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    auto result = maxSubArray(nums);
    int maxSum = result.first;
    int startIdx = result.second.first;
    int endIdx = result.second.second;

    cout << "Largest sum is: " << maxSum << endl;
    cout << "Subarray is from index " << startIdx << " to " << endIdx << endl;

    return 0;
}
