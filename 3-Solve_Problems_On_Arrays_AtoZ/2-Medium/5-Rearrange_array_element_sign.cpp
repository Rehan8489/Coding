#include<iostream>
using namespace std;
void brute(int arr[],int n){
    int pos_index=0,neg_index=1;
    int hash[n]={0};
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            hash[pos_index]=arr[i];
            pos_index+=2;
        }
        else{
            hash[neg_index]=arr[i];
            neg_index+=2;
        }

    }
    for(int i=0;i<n;i++){
        cout<<hash[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,-3,-1,-2,-3};
    int n=sizeof(arr)/sizeof(arr[0]);
    brute(arr,n);
    return 0;
}