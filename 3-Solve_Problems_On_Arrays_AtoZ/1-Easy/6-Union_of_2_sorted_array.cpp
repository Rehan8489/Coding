#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = {1,2,1,3,4,2,5};
    int arr2[] = {1,3,4,6};

    set<int> st;

    for (int i = 0; i < 7; i++) {
        st.insert(arr1[i]);
    }

    for (int i = 0; i < 4; i++) {
        st.insert(arr2[i]);
    }

    int Union[st.size()];
    int i = 0;

    for (auto it : st) {
        Union[i] = it;
        i++;
    }

    cout << "Union: ";
    for (int j = 0; j < st.size(); j++) {
        cout << Union[j] << " ";
    }

    return 0;
}


//  *** optimal solution*****
int main(){
   int arr1[] = {1,2,1,3,4,2,5};
   int arr2[] = {1,3,4,6};                         

   int i=0,j=0;
    vector<int> Union;  
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    while(i<n1 && j<n2){
        if(arr1[i] < arr2[j]){
            if(Union.size() == 0 || Union.back() != arr1[i]){
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if(Union.size() == 0 || Union.back() != arr2[j]){
                Union.push_back(arr2[j]);
            }
            j++;
        }
    }
    // if there is reamaining element in arr2 and arr1 got exhausted
    while(j<n2){
        if(Union.size() == 0 || Union.back() != arr2[j]){
            Union.push_back(arr2[j]);
        }
        j++;
    }
    //  similarly if there is reamaining element in arr1 and arr2 got exhausted
    while(i<n1){
        if(Union.size() == 0 || Union.back() != arr1[i]){
            Union.push_back(arr1[i]);
        }
        i++;
    }
    // Print the union
    cout << "Union: ";
    for(int k = 0; k < Union.size(); k++){
        cout << Union[k] << " ";
    }
    return 0;
}

