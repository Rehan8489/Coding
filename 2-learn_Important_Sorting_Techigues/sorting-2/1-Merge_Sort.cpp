#include <bits/stdc++.h>
using namespace std;

// Here are the comprehensive notes for **Merge Sort**, structured for your reference in VS Code:

// ### Merge Sort: Comprehensive Notes

// **1. Concept Overview**
// - **Divide and Conquer:** Merge Sort follows this strategy by recursively partitioning an array into two halves until individual elements are reached, then merging those fragments back together in sorted order.
// - **Performance:** Unlike $O(n^2)$ sorting algorithms (Bubble, Insertion, Selection), Merge Sort achieves a consistent **$O(n \log n)$** time complexity.

// **2. Recursive Workflow**
// - **Base Case:** The recursion stops when `low == high`, signifying that the subarray contains only one element and is inherently sorted.
// - **Recursive Steps:**
//   1. Calculate the midpoint: `mid = (low + high) / 2`.
//   2. Recursively call `MergeSort` on the left half (`low` to `mid`).
//   3. Recursively call `MergeSort` on the right half (`mid + 1` to `high`).
//   4. Invoke the `merge` function to combine the two sorted halves into a single sorted sequence.

// **3. Merge Logic (The Two-Pointer Technique)**
// - **Initialization:** Create a temporary array to hold merged elements. Maintain two pointers: `left` (starting at `low`) and `right` (starting at `mid + 1`).
// - **Comparison:** While both pointers are within bounds, compare the elements at `array[left]` and `array[right]`. Append the smaller value to the temporary array and increment the respective pointer.
// - **Exhaustion:** If one subarray is fully traversed, copy all remaining elements from the other subarray into the temporary array.
// - **Final Update:** Copy the sorted elements from the temporary array back into the original array (from `low` to `high`) to complete the sorting process for that segment.

// **4. Complexity Analysis**
// - **Time Complexity:** $O(n \log n)$ for best, average, and worst-case scenarios. The array is divided $\log n$ times, and merging takes $O(n)$ time at each level.
// - **Space Complexity:** $O(n)$ because a temporary array is required to store elements during the merge process.


    

void merge(int arr[],int low,int mid,int high ){
    int temp[]={};//empty data structure
    //first array will[low,..mid]
    //2nd array will be[mid+1,.. high] 
    int left=low;
    int right=mid+1;
    while(left<=mid&& right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
        }
        while(left<=right){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
    }
    for(int i=low;i<high;i++){
        arr[i]=temp[i-low];
    }

void merge_sort(int arr,int low,int high){
    if(low==high) return;
    int mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}



}
int main() {
    int arr[]={2,5,3,9,6,0,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n;
    merge_sort(arr,low,high);


    
    return 0;
}