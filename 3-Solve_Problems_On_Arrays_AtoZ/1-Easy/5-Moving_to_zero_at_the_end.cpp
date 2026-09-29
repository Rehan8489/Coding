#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void move_zero_to_end(int arr[], int n){ // brute force
    vector<int> temp;
    int count =0;
    for (int i=0;i<n;i++){
        if (arr[i]!=0){
            temp.push_back(arr[i]);
            count++;
        }
    }    
    for (int i=0;i<count;i++){
        arr[i]=temp[i];

    } 
    for(int i=count;i<n;i++){
        arr[i]=0;
    }  
    cout<<"array after moving zero to the end is ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }    

}

void move_zero_to_end_optimal(int arr[], int n){ // optimal approach
   int j=-1;
   for (int i=0;i<n;i++){
    if (arr[i]==0){
        j=i;
        break;
    }
   }
   for (int i=j+1;i<n;i++){
    if (arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
   }
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
    move_zero_to_end_optimal(arr,n);
    cout<<"array after moving zero to the end is ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }    
}