#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,1,1,2,4,3,6,4,3,6};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        int num = arr[i];

        for (int j = 0; j < n; j++) {
            if (arr[j] == num) {
                cnt++;
            }
        }

        if (cnt == 1) {
            cout << "Unique element: " << num;
            return 0;
        }
    }

    cout << "No unique element found.";

    return 0;
}