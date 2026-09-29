#include <iostream>
using namespace std;

// ----------------------------------------
// Program: Basic Hashing using Array
// Purpose: Pre-store frequency of elements (hashing) 
//          and fetch count in O(1) time for each query
// ----------------------------------------

int main() {

    // Step 1: Take size of array
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    // Step 2: Take array input
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 3: Create hash array (frequency array)
    // Assuming all array elements are between 0 and 12
    int hash[13] = {0}; // Initialize all to 0

    // Step 4: Precompute frequencies
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++; // Increment count of that number
    }

    // Step 5: Answer queries using precomputed hash
    int q;
    cout << "\nEnter number of queries: ";
    cin >> q;

    cout << "Enter the numbers you want to check:\n";
    while (q--) {
        int number;
        cin >> number;

        // Step 6: Fetch and display result
        cout << "Count of " << number << " = " << hash[number] << endl;
    }

    return 0;
}
