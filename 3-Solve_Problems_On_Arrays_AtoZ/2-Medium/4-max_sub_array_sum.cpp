#include<bits/stdc++.h>
using namespace std;
int brute (int arr[],int n) {
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<j;k++){
                sum+=arr[k];
                maxi=max(sum,maxi);
            }
        }
    }
    return maxi;
}
int better(int arr[],int n){
    int maxi=INT_MIN;
    for (int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi=max(sum,maxi);
        }

    }
    return maxi;
}
int optimal(int arr[],int n){
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
       sum+=arr[i];
       maxi=max(sum,maxi);
       if(sum>maxi){
        maxi=sum;
       }
        if(sum<0){
        sum=0;
       } 
    }
    return maxi;
}
void Print_subarray(int arr[],int n){
    int maxi=INT_MIN;
    int sum=0;
    int start =0;
    int ans_start=-1,ans_end=-1;
    for(int i=0;i<n;i++){
       maxi=max(sum,maxi);
       if (sum==0)  start=i;
       sum+=arr[i];
       if(sum>maxi){
        maxi=sum;
        ans_start=start;
        ans_end=i;

       }
        if(sum<0){
        sum=0;
       } 
    }
    for(int i=ans_start;i<=ans_end;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<optimal(arr,n);
    Print_subarray(arr,n);
    return 0;
}