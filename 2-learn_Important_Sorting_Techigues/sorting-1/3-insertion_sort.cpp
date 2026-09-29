//it always takes element and places it i correct position

#include <iostream>
using namespace std;
void insertion_sort(int arr[], int n){
    for (int i =0; i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            //we use j>0 to alter the formation of arr[-1] because 
            //in the above line we use arr[j-1] if j=0 then it will -1
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
int main() {
    int n;
    cout<<"enter the number of element in array"<<endl;
    cin>>n;
    cout<<"enter your array eleemnt"<<endl;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    insertion_sort(arr,n);
    cout<<"you desired sorted order array is "<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

//time complexity will be summation of natural number in worst case senerio
//for best case senerio there will no need to run the code as the condition full fill
//one first loop run
//so time complexity will be 
//worst case and avg case O(N^2)
//best case senerio O(N)