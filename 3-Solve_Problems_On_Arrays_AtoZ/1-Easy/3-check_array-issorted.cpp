#include <iostream>4

#include <iostream>
#include <set>

using namespace std;

// int main() {
//     int n;
//     cout << "enter the num of array you wanted ";
//     cin >> n;

//     int arr[n];

//     cout << "enter the array element ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     bool sorted = true;

//     for (int i = 0; i < n - 1; i++) {
//         if (arr[i] > arr[i + 1]) {
//             sorted = false;
//             break;
//         }
//     }

//     if (sorted)
//         cout << "Array is sorted";
//     else
//         cout << "Array is not sorted";

//     return 0;
// }


// remove duplicate from sorted array
// we have to find the unique element in the array and put it in the front of the array and return the count of unique element in the array

//  brute force approach is to use set and insert the element in the set and then return the size of the set but it will take O(n) time and O(n) space complexity

// int main() {
//     int arr[] = {1, 1, 2, 2, 2, 3, 3};
//     int n = 7;

//     set<int> st;

//     for(int i = 0; i < n; i++) {
//         st.insert(arr[i]);
//     }

//     int ind = 0;

//     for(auto it : st) {
//         arr[ind] = it;
//         ind++;
//     }

//     cout << "Unique elements are: ";

//     for(int i = 0; i < ind; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// optimal appraoch
int main(){
    int i=0;
    int arr[]={1,1,2,2,2,3,3};
    int n=7;
    for (int j=1;j<n;j++){
        if (arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    cout<<"Unique elements are: ";
    for (int k=0;k<=i;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}