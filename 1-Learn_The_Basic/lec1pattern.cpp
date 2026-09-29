#include <iostream>
using namespace std;

void print2(int n){

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <=i ; j++) {
            cout<<"*";
        }
        cout << endl;  // Corrected to use std::endl for line break
    }
}        
   
void print3(int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <=i ; j++) {
            cout<<j+1<<" ";
        }
        cout << endl;  // Corrected to use std::endl for line break
    }        
    
}   
void print4(int n) {

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=i ; j++) {
            cout<<i <<" ";
        }
        cout << endl;  // Corrected to use std::endl for line break
    }        
    
}   
void print5(int n) {

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n-i+1 ; j++) {
            cout<<"*";
        }
        cout << endl;  // Corrected to use std::endl for line break
    }        
    
}  
void print6(int n) {

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n-i+1 ; j++) {
            cout<<j;
        }
        cout << endl;  // Corrected to use std::endl for line break
    }        
    
}  
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
} 
void print10(int n) {
    for (int i = 1; i <= 2*n-1; i++) {
        int stars=i;
        if (i>n)stars=2*n-i;
        for (int j = 1; j <= stars; j++) {
            cout<<"*";
        }
        cout << endl;  // Corrected to use std::endl for line brea 
    }
}            
void print11(int n){
    int start=1;
    for (int i = 0; i <n; i++) {
        
        if (i%2==0)start=0;
        else start=1;
        for (int j = 0; j <= i; j++) {
            cout<<start;
            start=1-start;  // Toggle between 0 and 1
        }
        cout << endl;  // Corrected to use std::endl for line break

    }
}


void print12(int n) {
    int space=2*(n-1);
    for (int i = 1; i <= n; i++) {
        // numbers (1 to n)
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // spaces (decreasing as i increases)
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }

        // reverse numbers (i to 1)
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

    
        cout << endl; // move to next line
        space-=2;
    }
void print13(int n){
    for (i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<char
            
        }
}

int main() {
    cout<<"hello world"<<endl;
    return 0;
}
