#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string str = "racecar";
    if (isPalindrome(str)) {
        cout << str << " is a palindrome." << std::endl;
    } else {
        cout << str << " is not a palindrome." << std::endl;
    }
    return 0;
}
