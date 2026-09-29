#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// ## left locate array 1 places###
// int main(){
//     int n;
//     cout<<"enter the number of array element you wanted in array ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the array element ";
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int temp = arr[0];
//     for(int i=0; i<n-1; i++){
//         arr[i] = arr[i+1];
//     }   
//     arr[n-1] = temp;
//     cout<<"array after left rotation is ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }



// } brute force approach is to use temp array and store the first k element in the temp array and then shift the remaining element to the left and 
// then copy the temp array to the end of the original array but it will take O(n) time and O(k) space complexity
// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int n=7;
//     int k;
//     cin>>k;
//     k=k%n;
//     int temp[k];
//     for(int i=0;i<k;i++){
//         temp[i]=arr[i];
//     }
//     for(int i=k;i<n;i++){
//         arr[i-k]=arr[i];

//     }
//     for(int j=0;j<k;j++){
//         arr[n-k+j]=temp[j];
//     }
//     cout<<"array after left rotation is ";
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }

// }


//              optimal approach

void left_rotate(int arr[], int n, int k){
    k=k%n;
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);

    // other way to reverse an array is to use two pointer approach and swap the element at the start and end pointer and then move the start pointer to the right and end pointer to the left until they meet each other
    // int start=0; 
    // int end=n-1;
    // while (start<=end){
    //     int temp=arr[start];
    //     arr[start]=arr[end];
    //     arr[end]=temp;
    //     start++;
    //     end--;
    // }
}
int main(){
    int n;
    cout<<"enter the number of array element you wanted in array ";
    cin>>n;                         
    int arr[n];
    cout<<"enter the array element ";   
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the number of places you want to rotate the array ";
    cin>>k;
    left_rotate(arr, n, k);
    cout<<"array after left rotation is ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}