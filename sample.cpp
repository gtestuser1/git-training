#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        // Compare characters from both ends
        if (str[left] != str[right]) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // Is a palindrome
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Check if the input string is a palindrome
    if (isPalindrome(input)) {
        std::cout << "'" << input << "' is a palindrome." << std::endl;
    } else {
        std::cout << "'" << input << "' is not a palindrome." << std::endl;
    }

    return 0;
}
