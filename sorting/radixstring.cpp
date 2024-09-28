#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// A utility function to get the maximum length of strings in the list
int getMaxLen(const vector<string> &arr) {
    int maxLen = 0;
    for (const auto &str : arr) {
        if (str.length() > maxLen)
            maxLen = str.length();
    }
    return maxLen;
}

// Perform counting sort on the 'digit' (character) position
void countingSort(vector<string> &arr, int digit) {
    int n = arr.size();
    vector<string> output(n); // Output array to hold the sorted result
    int count[256] = {0};     // Create a count array for 256 ASCII characters

    // Store the count of each character at position 'digit' in the strings
    for (int i = 0; i < n; i++) {
        char ch = digit < arr[i].length() ? arr[i][digit] : '\0'; // Use '\0' for padding
        count[ch]++;
    }

    // Modify the count array to store the cumulative position of characters
    for (int i = 1; i < 256; i++)
        count[i] += count[i - 1];

    // Build the output array by placing strings at their correct sorted positions
    for (int i = n - 1; i >= 0; i--) {
        char ch = digit < arr[i].length() ? arr[i][digit] : '\0'; // Use '\0' for padding
        output[count[ch] - 1] = arr[i];
        count[ch]--;
    }

    // Copy the sorted array to the original array
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Radix Sort function for strings
void radixSort(vector<string> &arr) {
    // Find the maximum length of strings in the array
    int maxLen = getMaxLen(arr);

    // Perform counting sort for every digit, starting from the least significant
    // character (rightmost) to the most significant (leftmost)
    for (int digit = maxLen - 1; digit >= 0; digit--) {
        countingSort(arr, digit);
    }
}

int main() {
    // Example array of strings
    vector<string> arr = {"banana", "apple", "grape", "orange", "kiwi", "peach"};

    cout << "Before sorting: \n";
    for (const string &str : arr)
        cout << str << " ";
    cout << endl;

    // Perform Radix Sort
    radixSort(arr);

    cout << "After sorting: \n";
    for (const string &str : arr)
        cout << str << " ";
    cout << endl;

    return 0;
}
