#include <iostream>
using namespace std;
// step1; select the min and swap
// swap at index 0,& min index{o->n-1}
// swap at index 1,and min index {1->n-2}so on..
// we go till n-2
 
void selection_sort(int arr[],int n) {
    
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        // swap(arr[min],arr[i]);//swapping part done here
            // another way now we do compare two number using temp variable
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;

    }
}
int main(){
    int n;
    cin>>n;  
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}