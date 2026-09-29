#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1,2,3,1,1,1,1,4,2,3};
    int target = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    int len = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum == target) {
                len = max(len, j - i + 1);
            }
        }
    }

    cout << len;

    return 0;
}