#include <bits/stdc++.h>
using namespace std;
// brute force method
int main(){
    int arr1[]={1,1,2,3,5,5,6,7};
    int arr2[]={1,1,1,4,5,5,6,8,9};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int vis[n2]={0};
    vector<int> Intersection;
    for(int i=0;i<n1;i++){
        for (int j=0;j<n2;j++){
            if (arr1[i]==arr2[j] && vis[j]==0){
                Intersection.push_back(arr1[i]);
                vis[j]=1;
                break;
            }
            if(arr1[i]<arr2[j]){
                break;
            }  
        }
    }
    for (int i=0;i<Intersection.size();i++){
        cout<<Intersection[i]<<" ";
    }
}
//  optimal solution
int main(){
    int arr1[]={1,1,2,3,5,5,6,7};
    int arr2[]={1,1,1,4,5,5,6,8,9};
    vector<int> Intersection;
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
                Intersection.push_back(arr1[i]);
                i++;
                j++; 
            
        }
    }
    for (int i=0;i<Intersection.size();i++){
        cout<<Intersection[i]<<" ";
    }
}
