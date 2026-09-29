#include <iostream>
using namespace std;
//adjacent swappping work here 
//one complete round of adjacent work here 
//0-n-1
//0-n-2
//0-n-3....
//0-1
//after every step complete in first loop there will sorting done on the last position 
//for this logic we use for loop such way that first loop get i=n-1 and second looop get j=i


//  ## to reduce the time complexity in the case of sorted array
//we  use didswap=0 variable to avoid running like worst case senerio



void bubble_sort(int arr[],int n){
    for (int i=n-1;i>=0;i--){
        int did_swap=0;
        for(int j=0;j<=i-1;j++){
            //j<=i-1 because for the last element there is nothing to compare at its adjacent position 
            if(arr[j]>arr[j+1]){
               int temp=arr[j+1];
               arr[j+1]=arr[j];
               arr[j]=temp;
               did_swap=1;
            }
        }
        if (did_swap==0) break ;
        cout<<"runs\n";//check number of times it run
        //best time complexity is O(N)
    }    //but in case of averag and worst it would be O(N^2)
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}