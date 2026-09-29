// 1st way is to first sort the array and then print the second last element 
// of the array as the second largest element but this approach will
// take O(nlogn) time complexity because of sorting and
// we can do it in O(n) time complexity by traversing the array only
// once and keeping track of the largest and second largest elements as 
// we go through the array. Here is the code for that approach:

// # 2nd way is to traverse the array twice, first time to find the largest element and second time to find the second largest element. This approach will also take O(n) time complexity but it will require two traversals of the array. Here is the code for that approach:
#include <iostream>
using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int largest = arr[0];
//     int second_largest = arr[0];
//     for(int i = 1; i < n; i++){
//         if(arr[i] > largest){
//             second_largest = largest;
//             largest = arr[i];
//         }
//         else if(arr[i] > second_largest && arr[i] != largest){
//             second_largest = arr[i];
//         }
//     }
//     cout << "The second largest element in the array is: " << second_largest << endl;
//     return 0;
// }

// for sec smallest is same approach 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the number of array element you wanted in array ";
    cin >> n;

    int arr[n];

    cout << "enter the array element ";
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];              
    }

    int smallest = arr[0];
    int second_smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Second Smallest = " << second_smallest << endl;

    return 0;
}
 
