#include<bits/stdc++.h>
using namespace std;
void brute(int arr[],int n){
    vector<int>ans;
    for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                leader=false;
                break;

            }


        }
        if(leader){
            ans.push_back(arr[i]);
        }
        

    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
void optimal(int arr[],int n){
    vector<int>ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            maxi=arr[i];
            ans.push_back(arr[i]);

        }
        maxi=max(arr[i],maxi);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
} 
int main(){
    int arr[]={10, 22, 12, 3, 0, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    optimal(arr,n);
    return 0;
}