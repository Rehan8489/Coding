#include<bits/stdc++.h>
using namespace std;


using namespace std;

int brute(int arr[], int n) {
    int maxCnt = 0;

    for (int i = 0; i < n; i++) {
        int x = arr[i];
        int cnt = 1;

        while (true) {
            bool found = false;

            for (int j = 0; j < n; j++) {
                if (arr[j] == x + 1) {
                    x++;
                    cnt++;
                    found = true;
                    break;
                }
            }

            if (!found)
                break;
        }

        maxCnt = max(maxCnt, cnt);
    }

    return maxCnt;
}
int better(int arr[],int n){
    int last_smallest=INT_MIN;
    int longest=0,cnt=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]-1==last_smallest){
            cnt++;
            last_smallest=arr[i];
        }
        else if(arr[i]==last_smallest){

        }
        else if(arr[i]!= last_smallest){
            cnt=1;
            last_smallest=arr[i];
        }
        longest=max(longest,cnt);
    }
    return longest;
    
}
 
int main(){
    int arr[]={102,4,100,1,101,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<better(arr,n);
    
    return 0;
}