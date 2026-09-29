#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,0,3,1,2,1,1,1,9,0,0};
    int maxi=0;
    int cnt=0;
    for(int i=0;i<arr.size();i++){
        if (arr[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }    
       
    }
    cout<<maxi;
}