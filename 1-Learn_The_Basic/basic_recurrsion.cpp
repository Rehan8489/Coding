// Recursion-when a func is called itself until a specified condition is met
#include <iostream>
using namespace std;
float count=0;
void f(){
    if (count==8){
        return;
    }
    else{
        cout<<count<<endl;
        count++;
        f();

    }
}
// basics recursion problems
// problem1= Print name 5 timespec
void problem1( int i, int n){
    if (i>n) return;
    cout<<"Rehan"<<endl;
    problem1(i+1,n);

}
// problem2 is print linesaly 1 to N
void problem2( int i, int n){
    if (i>n) return;
    cout<<i<<endl;
    problem2(i+1,n);
}
// Problem3 is print number from n to 1 
 void problem3(int i,int n){
    if (i<n) return;
    cout<<i<<endl;
    problem3(i-1,n);
 }
 //  problem4 print from 1 to n f(i+1,n) we cant use this method 
// solve this qustion by bactrack
 void problem4(int i,int n){
    if(i<1) return;
    problem4(i-1,n);
    cout<<i<<endl;    //after all the steps then after, FROM here  here backtrack started 

}
// problem 5 is print from n to 1 in a same way as done above 
void problem5(int i,int n){
    if (i>n) return;
    problem5(i+1,n);
    cout<<i<<endl;
    // repeat this question 
}   
// int main(){
//     int n;
//     cin>>n;
//     p6(1,n);
// } 
//problem6 = sum of first n numbers using recursion method 
//1st way= parametric way
void p6(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    p6(i-1,sum+i);
    
}

// int main(){
//     int n;
//     cin>>n;
//     p6(n,0);

// }

// 2nd way like function way
int problem_6(int n){
    if(n==0){
        return 0;
    }
    return n+problem_6(n-1);

}
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<problem_6(n);
// }
// int main(){
//     int n;
//     cin>>n;
//     p6(1,n);
// }



// problem 7 is find the factorial of n
// 1st parametrise way 
void p7(int i,int fact)
{
    if (i<1){
        cout<<fact;
        return;
    }
    p7(i-1,fact*i);

}
// int main(){
//     int n;
//     cin>>n;
//     p7(n,1);
// }


// now using functional
int problem_7(int n){
    if (n==1) return 1;
    return n*problem_7(n-1);

}
// int main(){
//     int n;
//     cin>>n;
//     cout<<problem_7(n)<<endl;
// }
 
// problem 8 is about the reversing the array


// 🔹 Concept:

// To reverse an array, we need to swap elements from both ends until the middle.

// Example: [1, 2, 3, 4, 5] → [5, 4, 3, 2, 1]
void problem_8(int arr[],int l,int r){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    problem_8(arr,l+1,r-1);

}
// int main(){
//     int arr[]={34,54,44,56,33,99};
//     cout<<"the original array is:"<<endl;
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }
//     problem_8(arr,0,5);
//     cout<<endl;

//     cout<<"reverse array is"<<endl;
//     for (int i=0;i<6;i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;
// }


// ##### using the recurrsion method#########
void problem8(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    problem8(i+1,arr,n);

}
// int main(){
//     int n;
//     cout<<"enter the number of elments you wanted to enter in the array and wanted to reverse "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the element in array you wanted to reverse"<<endl;
//     for(int i=0;i<n;i++){    
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){    
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     problem8(0,arr,n);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  

// }

// check the string is palllindrome or not 
// problem 9 

bool problem9(int i,string &s){
    if(i>=s.size()/2) return true;
    if (s[i]!=s[s.size()-i-1]) return false;
    return problem9(i+1,s);

}

int main(){
    string s="madaam";
    cout<<problem9(0,s);
    return 0;
}    




 