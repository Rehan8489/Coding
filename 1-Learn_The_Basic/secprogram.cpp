#include <iostream>
using namespace std;


void print7(int n) {

    for (int i = 0; i < n; i++) {
        for (int j=0;j<n-i-1;j++) {
            cout<<" ";
        }
        for (int j = 0; j <2*i +1; j++) {
            cout<<"*";
        }
        for (int j = 1; j < n-i-1 ; j++) {
            cout<<" ";
        }
        cout << endl;  // Corrected to use std::endl for line break
        
    }        
}    
void print8(int n) {

    for (int i = 0; i < n; i++) {
        for (int j=0;j< i;j++) {
            cout<<" ";
        }
        for (int j =0; j<2*n-(2*i +1); j++) {
            cout<<"*";
        }
        for (int j = n; j<i ; j++) {
            cout<<" ";
        }
        cout << endl;  // Corrected to use std::endl for line break
        
    }     
int main() {
    int t;
    cin >> t;
    print7(t);
    print8(t);
    return 0;
}