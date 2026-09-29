#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void brute(int arr[],int n,int target) {
    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<"yes it is possible and the index for element\n"<<i<<j;
                found=true;
            
            }
            
        
        }
        
        }
    if(!found){
            cout<<"not found";
    }

    
}
map<int,int>mpp;
pair<int,int> better(int arr[],int n,int target){
    mpp.clear();
    for(int i=0;i<n;i++){
        int a=arr[i];
        int needed= target-a;
        if(mpp.find(needed)!=mpp.end()){
            return {mpp[needed],i};
        }
        mpp[a]=i;
    }
    return {-1,-1};
}

string optimal(int arr[],int n,int target){
    int left=0,right=n-1;
    sort(arr,arr+n);
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            return "yes";
        }
        else if(sum<target) left++;
        else right--;
    }
    return "no";
}
int main(){
    int arr[]={3,5,2,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"enter your target value\n";
    cin>>target;
    // brute(arr,n,target);
    cout<<optimal(arr,n,target);
    return 0;
}