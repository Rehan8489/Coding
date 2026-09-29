#include <bits/stdc++.h>
using namespace std;

///using mapping  method

void number_hashing() {
    int n;
    cout<<"enter the number of element containg array you wanted to make"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    // //iterate in the map
    // for (auto it:mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }
    int q;
    cout<<"enter the number of queries you wanted to do"<<endl;
    cin>>q;
    cout<<"enter the number to check it frequency on the array"<<endl;
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;

    }

}

// the map store all the value in sorted order 


// now hashing in the character 


void character_hashing(){
    string s;
    cout<<"enter the word you want to hash"<<endl;
    cin>>s;
    //precompute
    // map<char,int> mpp;
    unordered_map<char,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]-'a']++;
    }

   int q;
   cout<<"enter the number of queries you wanted to check"<<endl;
   cin>>q;
   while(q--){
    char p;
    cout<<"enter the char you wanted to check"<<endl;
    cin>>p;
    cout<<"the number of times this char exist in the given words is-"<<p <<" "<<mpp[p-'a']<<endl;
   }


}

 
int main() {
    // number_hashing();
    character_hashing();

    
}
//   map  time complexity will be log(n)

// in unordered map time complexity is O(1)
// in worst scenario the time complexity will be O(N)
// N=number of element in the map
// to use it we replace map to unordered_map it work same as map 
// normally we use it in place of map because of its timme complexity .