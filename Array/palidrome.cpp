#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    if (num < 0) return false;

    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int number = 12321;
    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << std::endl;
    } else {
        cout << number << " is not a palindrome." << std::endl;
    }

    return 0;
}
