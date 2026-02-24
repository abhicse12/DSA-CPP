#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {3, 0, 1};

    sort(nums.begin(), nums.end());

    int missing;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != i) {
            missing = i;
            break;
        }
    }

    if (nums.back() == nums.size() - 1) {
        missing = nums.size();
    }

    cout << "Missing number = " << missing;

    return 0;
}