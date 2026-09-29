#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

void brute(int arr[], int n) {
    bool found = false;

    for (int i = 0; i < n; i++) {
        int cnt = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cnt++;
            }
        }

        if (cnt > n / 2) {
            cout << "Element is " << arr[i]
                 << " count is " << cnt << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No majority element";
    }
}
int better(int arr[],int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mpp[arr[i]]>n/2){
            return arr[i];
        }
    }
    return -1; 
}
int optimal(int arr[],int n){
    int cnt=0,el;
    for (int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=arr[i];
        }
        else if (arr[i]==el){
            cnt++;
        }
        else cnt--;
        // if cnt become element changes in el 
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            cnt1++;
        }
    }
    if(cnt1>n/2){
        return el;
    }
    return -1;


}

int main(){
    int arr[]={2,2,3,3,1,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    brute(arr,n);
    cout<<optimal(arr,n);
}  
