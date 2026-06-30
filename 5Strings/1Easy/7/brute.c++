
#include <bits/stdc++.h>
using namespace std;

// Function to check if two strings are anagrams
bool CheckAnagrams(string str1, string str2) {
    // Case 1: when both of the strings have different lengths
    if (str1.length() != str2.length()) {
        return false;  // Strings can't be anagrams if lengths are different
    }

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Case 2: check if every character of str1 and str2 matches with each other
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i]) {
            return false;  // If any character doesn't match, they aren't anagrams
        }
    }

    return true;  // Strings are anagrams
}

int main() {
    // Example strings to check if they are anagrams
    string Str1 = "INTEGER";
    string Str2 = "TEGERNI";

    // Check if the strings are anagrams and output the result
    if (CheckAnagrams(Str1, Str2)) {
        cout << "True" << endl;  // Output "True" if they are anagrams
    } else {
        cout << "False" << endl;  // Output "False" if they aren't anagrams
    }

    return 0;
}
